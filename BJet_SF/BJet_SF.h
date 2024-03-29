#ifndef BJET_SF_H_INCLUDED
#define BJET_SF_H_INCLUDED

Double_t bJet_SF(Double_t eta, Double_t pt, TString jetFlavorstring, TString OperatingPoint);
Double_t bJet_SFLow(Double_t eta, Double_t pt, TString jetFlavorstring, TString OperatingPoint);
Double_t bJet_SFUp(Double_t eta, Double_t pt, TString jetFlavorstring, TString OperatingPoint);

#endif