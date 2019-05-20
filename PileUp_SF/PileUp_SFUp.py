#!/usr/bin/env python
# coding: utf-8

# In[1]:


import ROOT


# In[2]:


from PileUp_SF_config import *


# In[3]:


from ROOT import TFile, TH2F, TCanvas, TH1D, TH1F


# In[4]:


f  = TFile(PileUp_SFUp_path_Data)


# In[5]:


f.ls()


# In[6]:


h = TH1D()


# In[7]:


c = TCanvas("SF","SF",600,400)


# In[8]:


f.GetObject("pileup",h)


# In[9]:


h.Draw("colz")
c.Draw()
c.SaveAs("PileUp_SFUp.pdf")


# In[10]:


#normalize histogram
nx = h.GetNbinsX()
print("# bins X = "+str(nx))
h.Scale(1.0/h.Integral())


# In[11]:


# Read text file (MC values)
txt = open(PileUp_SF_path_MC)
mc = str()
for line in txt:
    mc += line
mc = mc.strip().split("=")[1].split("{")[1].split("}")[0].split(" ,")
mc = map(lambda x: float(x),mc)   


# In[12]:


# Scale histogram (to match MC with Data)
for i in xrange(0,nx):
    bin_index = i + 1
    h.SetBinContent(bin_index,(1.0/mc[i])*h.GetBinContent(bin_index) )


# In[14]:


h.Draw("colz")
c.Draw()
c.SaveAs("PileUp_SFUp.pdf")


# In[15]:


dotH_name = "PileUp_SF"+"Up"+".h"
dotC_name = "PileUp_SF"+"Up"+".C"
func_type = "Double_t"
func_name = "pileUp_SF"+"Up"
x_type = "Int_t"
x_name = "nTrueInt"


# In[16]:


dotH = str()

dotH += "#ifndef "+dotH_name.upper().split(".")[0]+str("_H_INCLUDED\n")
dotH += "#define "+dotH_name.upper().split(".")[0]+str("_H_INCLUDED\n")
dotH += "\n"
dotH += func_type+" "+func_name+"("+x_type+" "+x_name+");\n"
dotH += "\n"
dotH += "#endif"
print(dotH)


# In[17]:


dotC = str()

dotC += "#include \""+dotH_name+"\"\n\n"
dotC += func_type+" "+func_name+"("+x_type+" "+x_name+"){\n"
for i in xrange(0,nx):
    bin_index = i+1
    dotC += "\tif( "+x_name+" == "+str(i)+"){\n"
    dotC += "\t\treturn\t"+str(h.GetBinContent(bin_index))+";\n"
    dotC += "\t}\n"
dotC += "\n\telse cout<<\"ERROR: UNEXPECTED behavior in one of pileUp_SF... function\"<<endl;\n"
dotC += "\tif( "+x_name+" > 74 || "+x_name+" < 0){\n"
dotC += "\t\tcout<<\"Error: Wrong number of nTrueInt(pileUp)\"<<endl;\n"
dotC += "\t\texit(1);\n"
dotC += "\t}\n"
dotC += "\n\treturn\t1000000;\n"
dotC+="}"


# In[18]:


def write_code(name,s):
    code_file = file(name,"w")
    code_file.write(s)
    code_file.close()
    
write_code(dotH_name,dotH)
write_code(dotC_name,dotC)

