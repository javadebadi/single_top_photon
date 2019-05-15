rm -rf Photon_SF.C Photon_SF.h Photon_SF.pdf Photon_SF_config.pyc
ipython nbconvert --to python Photon_SF.ipynb
python Photon_SF.py
