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
- photons (MyPhoton)
- electorons (MyElectron)
- muons (MyMuon)
- jets (MyJet)
- genParticles (MyGenParticle)
- mets (MyMET)

I have write a C++ class for each of these objects. The name of the classes and files are shown above in the paranthesis. 

In any physics analysis we need to present a cut-flow table which shows how much of the events could survive from the cuts. This is important for hypothesis test in physics. We need to go in some part of phase space where the number of signal events is comparable to background events. In that region we can claim discovery or present our exclusion bounds.
