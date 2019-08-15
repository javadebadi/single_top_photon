# single top photon
The code for analysis of single top + photon using LHC data @13 TeV.

Feynman Diagrams for single top + photon prcoesses:
***

**Goal**: study SM process: single top + photon, with special interest on tt&gamma; coupling   
- **sub-Goal (1)**: __*muon*__ channel for top decay using 2017 and 2018 data  ( Javad will do this for now)
- **sub-Goal (2)**: combine 2017 and 2018 results with 2016
- **sub-Goal (3)**: __*electron*__ channel for top decay (Ali or Saleh might join for this part, which has its own new challenges)


### Structure of the Code

The main code is a C++ code which is designed and implemented for physics analysis. 

In the physics analysis we have serveral objects:
- photons
- electorons
- muons
- jets
- mets

I have write a C++ class for each of these objects. 
