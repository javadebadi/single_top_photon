rm -rf PileUp_SF.C PileUp_SF.h 
rm -rf PileUp_SF.pdf PileUp_SFLow.pdf PileUp_SFUp.pdf PileUp_SF_config.pyc
rm -rf PileUp_SFLow.C PileUp_SFLow.h
rm -rf PileUp_SFUp.C PileUp_SFUp.h
ipython nbconvert --to python PileUp_SF.ipynb
ipython nbconvert --to python PileUp_SFLow.ipynb
ipython nbconvert --to python PileUp_SFUp.ipynb
python PileUp_SF.py
python PileUp_SFLow.py
python PileUp_SFUp.py
