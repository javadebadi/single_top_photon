#!/usr/bin/env python
# coding: utf-8

# In[1]:


import numpy as np
import pandas as pd
from BJet_SF_config import *


# In[2]:


df = pd.read_csv(BJet_SF_path)


# In[3]:


print("=========== Read BJet SF ============")
print("------> Input: "+str(BJet_SF_path)+" ------")
print(df.head(1))
print("=========== remove whitespaces form columns names ==========")
# remove whitespace from columns name of the csv  file
new_cols = []
for col in df.columns:
    new_cols.append(col.strip())

df.columns = new_cols
del new_cols
print("============ Iterating over DataFrame ============")


# In[11]:


dotH_name = "BJet_SF.h"
dotC_name = "BJet_SF.C"
func_name = "bJet_SF"
func_name_Low = func_name+"Low"
func_name_Up  = func_name+"Up"
func_type = "Double_t"
func_sysType = "central"
func_sysType_Low = "down"
func_sysType_Up = "up"
func_dic={func_sysType_Low:func_name_Low, func_sysType:func_name, func_sysType_Up:func_name_Up}
func_measurementTypes = ["comb","incl"]
type_x = "Double_t"
name_x = "eta"
type_y = "Double_t"
name_y = "pt"
type_z = "TString"
name_z = "jetFlavorstring"
type_w = "TString"
name_w = "OperatingPoint"


# In[12]:


dotH = str()

dotH += "#ifndef "+dotH_name.upper().split(".")[0]+str("_H_INCLUDED\n")
dotH += "#define "+dotH_name.upper().split(".")[0]+str("_H_INCLUDED\n")
dotH += "\n"
dotH += func_type+" "+func_name+"("+type_x+" "+name_x+", "+type_y+" "+name_y+", "+type_z+" "+name_z+", "+type_w+" "+name_w+");\n"
dotH += func_type+" "+func_name_Low+"("+type_x+" "+name_x+", "+type_y+" "+name_y+", "+type_z+" "+name_z+", "+type_w+" "+name_w+");\n"
dotH += func_type+" "+func_name_Up+"("+type_x+" "+name_x+", "+type_y+" "+name_y+", "+type_z+" "+name_z+", "+type_w+" "+name_w+");\n"
dotH += "\n"
dotH += "#endif"
print(dotH)


# In[6]:


ptMax_max = df[df["measurementType"].apply(str.strip)=="incl"]["ptMax"].max()


# In[17]:


def dotC_for_sysType(func_sysType):
    dotC = str()
    assert(type(func_sysType)==str)
    func_name = func_dic[func_sysType]
    dotC += func_type+" "+func_name+"("+type_x+" "+name_x+", "+type_y+" "+name_y+", "+type_z+" "+name_z+", "+type_w+" "+name_w+"){\n"
    dotC += "\tDouble_t &x = pt;\n"
    dotC += "\tInt_t op = 0;\n"
    dotC += """\tif(OperatingPoint == "tight") op=2;\n"""
    dotC += """\telse if(OperatingPoint == "loose") op=0;\n"""
    dotC += """\telse if(OperatingPoint == "medium") op=1;\n"""
    dotC += """\telse {
    \t\tcout<<"Error: the discriminator of BJet is not specified correctly: it should be one of (loose,tight,medium). The error is raised from one of BJet_SF functions"<<endl;
    \t\texit(1);
    \t}

    \n"""
    # jet flavor set code
    dotC += "Int_t jetFlavor = 0;\n"
    dotC += """\tif(jetFlavorstring == "u" || jetFlavorstring == "s" || jetFlavorstring == "d") jetFlavor=2;\n"""
    dotC += """\telse if(jetFlavorstring == "b" || jetFlavorstring == "c") jetFlavor=1;\n"""
    dotC += """\telse if(jetFlavorstring == "non") jetFlavor=0;\n"""
    dotC += """\telse {
    \t\tcout<<"Error: the jetFlavor is not correct. It should be one of (u,c,s,d,b,non). The error is raised from one of BJet_SF functions"<<endl;
    \t\texit(1);
    \t}

    \n"""

    for index, row in df.iterrows():
        if row["sysType"].strip() != func_sysType or not(row["measurementType"].strip() in func_measurementTypes):
            continue

        low_y = str(row["ptMin"])
        up_y  = str(row["ptMax"])
        # this line is kind of extraploation which needs to be taken care for new csv inputs
        if(row["ptMax"] == 1000):
            up_y = str(10000)

        dotC += "\tif("+name_y+" > "+low_y+" && " + name_y+" <= "+up_y
        dotC += " && "+ "jetFlavor" + " == "+str(row["jetFlavor"])
        dotC += " && "+ "op" + " == "+str(row["OperatingPoint"])
        dotC += "){\n"
        dotC += "\t\treturn\t"+row["formula"].strip()+";\n"
        dotC += "\t}\n"
    dotC += "\telse\treturn\t1;"
    dotC += "}\n\n"
    return dotC


# In[18]:


dotC = str()
dotC += "#include \""+dotH_name+"\"\n"
dotC += dotC_for_sysType(func_sysType)
dotC += dotC_for_sysType(func_sysType_Low)
dotC += dotC_for_sysType(func_sysType_Up)


# In[ ]:


def write_code(name,s):
    code_file = file(name,"w")
    code_file.write(s)
    code_file.close()
    
write_code(dotH_name,dotH)
write_code(dotC_name,dotC)

