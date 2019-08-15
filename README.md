# single top photon
The code for analysis of single top + photon using LHC data @13 TeV.


***

**Goal**: study SM process: single top + photon, with special interest on tt&gamma; coupling   
- **sub-Goal (1)**: __*muon*__ channel for top decay using 2017 and 2018 data  ( Javad will do this for now)
- **sub-Goal (2)**: combine 2017 and 2018 results with 2016
- **sub-Goal (3)**: __*electron*__ channel for top decay (Ali or Saleh might join for this part, which has its own new challenges)

***
### Structure of the Code

The main code is a **C++** code which is designed and implemented for physics analysis. I have used **Python** and **Bash** to make some parts of the programming faster and maintainable. 

In the physics analysis we have serveral objects:
- photons (MyPhoton)
- electorons (MyElectron)
- muons (MyMuon)
- jets (MyJet)
- genParticles (MyGenParticle)
- mets (MyMET)

I have written a **C++** class for each of these objects. The name of the classes and files are shown above in the paranthesis. The classes are **inherited** from root-cern **TLorentzVector** class and extended to have attributes which are in need for physics analysis. 

In any physics analysis we need to present a cut-flow table which shows how much of the events could survive from the cuts. This is important for hypothesis test in physics. We need to go in some part of phase space where the number of signal events is comparable to background events. In that region we can claim discovery or present our exclusion bounds. I have generated some utilites and classes for this purpose. I have used **C++** library to read and write files in an appropriate format.


For some objects we need some **corrections** based on the parts of detector which are not working as designed. There are **csv** files to which include corrections to these situations. I have written a **python** code to write these csv files and automatically generate a **C++** code to realize these corrections in my main **C++** code.

In additon, I have made some **bash** scripts to make processes of running and invoking programs and classes automatics.

For analysis itself, we need to read data from `.root` files. The `SmallClass.h` represents a file which has a class to read the data. In the `SmallClassExtra.h` file, I have written a new class called `SmallClassExtra` which is **inherited** form `SmallClass`. This class has methods to read branches of trees for data file, fill physics objects in each event, apply cuts and store necessary information in the memory and final results in pdf and csv files. 
