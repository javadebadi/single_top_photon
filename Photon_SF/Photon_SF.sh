rm -rf Photon_SF.C Photon_SF.h Photon_SF.pdf Photon_SF_config.pyc
rm -rf Photon_SFLow.C Photon_SFLow.h
rm -rf Photon_SFUp.C Photon_SFUp.h
ipython nbconvert --to python Photon_SF.ipynb
ipython nbconvert --to python Photon_SFLow.ipynb
ipython nbconvert --to python Photon_SFUp.ipynb
python Photon_SF.py
python Photon_SFLow.py
python Photon_SFUp.py
