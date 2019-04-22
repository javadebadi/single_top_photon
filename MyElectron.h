#ifndef MYELECTRON_H_INCLUDED
#define MYELECTRON_H_INCLUDED

#include "TLorentzVector.h"
#include "Standards.h"
#include <vector>


class MyElectron: public TLorentzVector{
private:
	Double_t HoverE                   = 0;
	Double_t SigmaIEtaIEta            = 0;
	Double_t SigmaIPhiIPhi            = 0;
	Double_t DeltaEtaInSeed           = 0;
	Double_t DeltaPhiInSeed           = 0;
	Double_t OneOverEMinusOneOverP    = 0;
	Double_t SCE                      = 0;
	Double_t SCEt                     = 0;
	Double_t SCEta                    = 0;
	Int_t    ExpectedMissingInnerHits = 0;
	Int_t    PassConversionVeto       = 0;
	Double_t PFIso                    = 0;
        Double_t rho = 0;       // not electron attribute but needed for photon
                                // in future may be updated
	Double_t EA                       = 0;
	Double_t RelCombPFIsoWithEACorrection = 0;
	// members which should be calculated (they don't exist in root file)
	
	
public:
	void set_HoverE(const Double_t &x){HoverE = x;}
	Double_t get_HoverE(){return HoverE;}
	void set_SigmaIEtaIEta(const Double_t &x){SigmaIEtaIEta = x;}
	Double_t get_SigmaIEtaIEta(){return SigmaIEtaIEta;}
	void set_SigmaIPhiIPhi(const Double_t &x){SigmaIPhiIPhi = x;}
	Double_t get_SigmaIPhiIPhi(){return SigmaIPhiIPhi;}
	void set_DeltaEtaInSeed(const Double_t &x){DeltaEtaInSeed = x;}
	Double_t get_DeltaEtaInSeed(){return DeltaEtaInSeed;}
	void set_DeltaPhiInSeed(const Double_t &x){DeltaPhiInSeed = x;}
	Double_t get_DeltaPhiInSeed(){return DeltaPhiInSeed;}
	void set_OneOverEMinusOneOverP(const Double_t &x){OneOverEMinusOneOverP = x;}
	Double_t get_OneOverEMinusOneOverP(){return OneOverEMinusOneOverP;}
	void set_SCE(const Double_t &x){SCE = x;}
	Double_t get_SCE(){return SCE;}
	void set_SCEt(const Double_t &x){SCEt = x;}
	Double_t get_SCEt(){return SCEt;}
	void set_SCEta(const Double_t &x){SCEta = x;}
	Double_t get_SCEta(){return SCEta;}
	void set_ExpectedMissingInnerHits(const Int_t &x){ExpectedMissingInnerHits = x;}
	Int_t get_ExpectedMissingInnerHits(){return ExpectedMissingInnerHits;}
	void set_PassConversionVeto(const Int_t &x){PassConversionVeto = x;}
	Int_t get_PassConversionVeto(){return PassConversionVeto;}
	void set_PFIso(const Double_t &x){PFIso = x;}
	Double_t get_PFIso(){return PFIso;}
	void set_rho(const Double_t &x){rho = x;}
	Double_t get_rho(){return rho;}
	void set_EA(const Double_t &x){EA = x;}
	Double_t get_EA(){return EA;}
	void set_RelCombPFIsoWithEACorrection(const Double_t &x){RelCombPFIsoWithEACorrection = x;}
	Double_t get_RelCombPFIsoWithEACorrection(){return RelCombPFIsoWithEACorrection;}

	void calculate_RelCombPFIsoWithEACorrection();
	void calculate_OneOverEMinusOneOverP();
	void build();
	Int_t is_passed();
	void print();
	void print_all(vector<MyElectron>&);
	
};

#endif
