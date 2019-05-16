#!/usr/bin/env python
# coding: utf-8

# In[1]:


import ROOT


# In[2]:


from Photon_SF_config import *


# In[3]:


from ROOT import TFile, TH2F, TCanvas


# In[4]:


f  = TFile(Photon_SFLow_path)


# In[5]:


f.ls()


# In[6]:


h = TH2F()


# In[7]:


c = TCanvas("SF","SF",800,800)


# In[8]:


f.GetObject("EGamma_SF2D",h)


# In[9]:


h.Draw("colzText")
c.Draw()
c.SaveAs("Photon_SF.pdf")


# In[10]:


nx = h.GetNbinsX()
ny = h.GetNbinsY()
print("# bins X = "+str(nx))
print("# bins X = "+str(ny))


# In[11]:


def find_edges(h,x,y):
    lowedge_x = h.GetXaxis().GetBinLowEdge(x)
    upedge_x  = h.GetXaxis().GetBinUpEdge(x)
    lowedge_y = h.GetYaxis().GetBinLowEdge(y)
    upedge_y  = h.GetYaxis().GetBinUpEdge(y)
    return str(lowedge_x), str(upedge_x), str(lowedge_y), str(upedge_y)


# In[12]:


def if_with_two_similar_and(n_tabs=1, low=-1000, up = 1000, value=str(100), name="eta"):
    '''
    n_tabs : number of default tabs
    low    : the lower limit of condition
    up     : the upper limit of condition 
    value  : the return value of if statement
    
    '''
    tabs = str()
    s    = str()
    and_s = " && "
    if_s  = "if( "
    if_ends = "){\n"
    return_s = "return\t"
    block_end = "}"
    
    for i in xrange(0,n_tabs):
        tabs += "\t"
        
    s += tabs+if_s+name+" > "+low+and_s+name+" <= "+up+if_ends
    s += tabs+"\t"+return_s+value+";\n"
    s += tabs+block_end+"\n"        
    return s


# In[14]:


dotH_name = "Photon_SFLow.h"
dotC_name = "Photon_SFLow.C"
func_type = "Double_t"
func_name = "photon_SFLow"
x_type = "Double_t"
y_type = "Double_t"
x_name = "eta"
y_name = "pt"


# In[16]:


dotH = str()

dotH += "#ifndef "+dotH_name.upper().split(".")[0]+str("_H_INCLUDED\n")
dotH += "#define "+dotH_name.upper().split(".")[0]+str("_H_INCLUDED\n")
dotH += "\n"
dotH += func_type+" "+func_name+"("+x_type+" "+x_name+", "+y_type+" "+y_name+");\n"
dotH += "\n"
dotH += "#endif"
print(dotH)


# In[21]:


dotC = str()

dotC += "#include \""+dotH_name+"\"\n\n"
dotC += "Double_t photon_SF(Double_t eta, Double_t pt){\n"
for x in xrange(1,nx+1):
    for y in xrange(1,ny+1):
        lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,x,y)
        central = h.GetBinContent(x,y)-h.GetBinErrorLow(x,y)
        dotC += "\tif( "
        dotC +=  x_name+" > "+lowedge_x+" && "+x_name+" <= "+upedge_x
        dotC += " && "
        dotC +=  y_name+" > "+lowedge_y+" && "+y_name+" <= "+upedge_y
        dotC += " ){"+"\n"
        dotC += "\t\treturn\t"+str(central)+";\n"
        dotC += "\t}"+"\n"
        
##################
##################
current_bin = 1
lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,current_bin,1)
dotC += "\tif( "+x_name+" <= "+lowedge_x+"){\n"
for y in xrange(1,ny+1):
    lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,current_bin,y)
    central = h.GetBinContent(x,y)-h.GetBinErrorLow(x,y)
    dotC += if_with_two_similar_and(n_tabs=2, low=lowedge_y, up=upedge_y, value=str(central),name=y_name)
dotC +=  "\t}\n"
   
current_bin = nx 
lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,current_bin,1)
dotC += "\tif( "+x_name+" > "+upedge_x+"){\n"
for y in xrange(1,ny+1):
    lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,current_bin,y)
    central = h.GetBinContent(current_bin,y)-h.GetBinErrorLow(current_bin,y)
    dotC += if_with_two_similar_and(n_tabs=2, low=lowedge_y, up=upedge_y, value=str(central),name=x_name)   
dotC +=  "\t}\n"

current_bin = 1
lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,1,current_bin)
dotC += "\tif( "+y_name+" <= "+lowedge_y+"){\n"
for x in xrange(1,nx+1):
    lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,x,current_bin)
    central = h.GetBinContent(x,current_bin)-h.GetBinErrorLow(x,current_bin)
    dotC += if_with_two_similar_and(n_tabs=2, low=lowedge_x, up=upedge_x, value=str(central),name=x_name)
dotC +=  "\t}\n"
   
current_bin = ny 
lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,1,current_bin)
dotC += "\tif( "+y_name+" > "+upedge_y+"){\n"
for x in xrange(1,nx+1):
    lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,x,current_bin)
    central = h.GetBinContent(x,current_bin)-h.GetBinErrorLow(x,current_bin)
    dotC += if_with_two_similar_and(n_tabs=2, low=lowedge_x, up=upedge_x, value=str(central),name=x_name)  
dotC +=  "\t}\n"
##################
#################
lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,1,1)
central = h.GetBinContent(1,1)-h.GetBinErrorLow(1,1)
dotC += "\n\tif( "+x_name+" <= "+lowedge_x+" && "+y_name+" <= "+lowedge_y+"){\n"
dotC += "\t\t return\t"+str(central)+";\n\t}"

lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,nx,1)
central = h.GetBinContent(nx,1)-h.GetBinErrorLow(nx,1)
dotC += "\n\tif( "+x_name+" > "+upedge_x+" && "+y_name+" <= "+lowedge_y+"){\n"
dotC += "\t\t return\t"+str(central)+";\n\t}"

lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,1,ny)
central = h.GetBinContent(1,ny)-h.GetBinErrorLow(1,ny)
dotC += "\n\tif( "+x_name+" <= "+lowedge_x+" && "+y_name+" > "+upedge_y+"){\n"
dotC += "\t\t return\t"+str(central)+";\n\t}"


lowedge_x, upedge_x, lowedge_y, upedge_y = find_edges(h,nx,ny)
central = h.GetBinContent(nx,ny)-h.GetBinErrorLow(nx,ny)
dotC += "\n\tif( "+x_name+" > "+upedge_x+" && "+y_name+" > "+upedge_y+"){\n"
dotC += "\t\t return "+str(central)+";\n\t}"

##################

dotC += "\n\telse cout<<\"ERROR: UNEXPEDTED behavior in photon_SF function\"<<endl;\n"
dotC+="}"


# In[24]:


def write_code(name,s):
    code_file = file(name,"w")
    code_file.write(s)
    code_file.close()
    
write_code(dotH_name,dotH)
write_code(dotC_name,dotC)

