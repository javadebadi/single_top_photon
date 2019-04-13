#ifndef MYPHOTON_H_INCLUDED
#define MYPHOTON_H_INCLUDED

#include "TLorentzVector.h"
#include "PhotonID.h"
#include <vector>

class MyPhoton: public TLorentzVector{
private:
	Double_t HoverE = 0;
	Double_t phoR9  = 0;
	Double_t SigmaIEtaIEta = 0;
	Double_t SigmaIPhiIPhi = 0;
	Double_t PFChIso  = 0;
	Double_t PFPhoIso = 0;
	Double_t PFNeuIso = 0;
	Int_t EleVeto = 0;
	Int_t hasPixelSeed = 0;
	Int_t mcMatchId = 0;
	// members which should be calculated (they don't exist in root file)
	Double_t EACh = 0;	// effective erea
				// effective erea is a function of eta
				// and it is determined for Photon ID document
	Double_t EAPho = 0;
	Double_t EANeu = 0;
	Double_t rho = 0; 	// not photon attribute but needed for photon
				// in future may be updated
	Double_t PFChIso_corrected = 0;
	Double_t PFPhoIso_corrected = 0;
	Double_t PFNeuIso_corrected = 0;
	
public:
	void set_HoverE(const Double_t &x){HoverE = x;}
	Double_t get_HoverE(){return HoverE;}
	void set_phoR9(const Double_t &x){phoR9 = x;}
	Double_t get_phoR9(){return phoR9;}
	void set_SigmaIEtaIEta(const Double_t &x){SigmaIEtaIEta = x;}
	Double_t get_SigmaIEtaIEta(){return SigmaIEtaIEta;}
	void set_SigmaIPhiIPhi(const Double_t &x){SigmaIPhiIPhi = x;}
	Double_t get_SigmaIPhiIPhi(){return SigmaIPhiIPhi;}
	void set_PFChIso(const Double_t &x){PFChIso = x;}
	Double_t get_PFChIso(){return PFChIso;}
	void set_PFPhoIso(const Double_t &x){PFPhoIso = x;}
	Double_t get_PFPhoIso(){return PFPhoIso;}
	void set_PFNeuIso(const Double_t &x){PFNeuIso = x;}
	Double_t get_PFNeuIso(){return PFNeuIso;}
	void set_EleVeto(const Int_t &x){EleVeto = x;}
	Int_t get_EleVeto(){return EleVeto;}
	void set_hasPixelSeed(const Int_t &x){hasPixelSeed = x;}
	Int_t get_hasPixelSeed(){return hasPixelSeed;}
	void set_mcMatchId(const Int_t &x){mcMatchId = x;}
	Int_t get_mcMatchId(){return mcMatchId;}
	void set_EACh(const Double_t &x){EACh = x;}
	Double_t get_EACh(){return EACh;}
	void set_EAPho(const Double_t &x){EAPho = x;}
	Double_t get_EAPho(){return EAPho;}
	void set_EANeu(const Double_t &x){EANeu = x;}
	Double_t get_EANeu(){return EANeu;}
	void set_rho(const Double_t &x){rho = x;}
	Double_t get_rho(){return rho;}
        void calculate_PFChIso_corrected(){
		PFChIso_corrected = TMath::Max( PFChIso-rho*EACh, 0.0);
	}
        Double_t get_PFChIso_corrected(){return PFChIso_corrected;}
        void calculate_PFPhoIso_corrected(){
                PFPhoIso_corrected = TMath::Max( PFPhoIso-rho*EAPho, 0.0);
        }
        Double_t get_PFPhoIso_corrected(){return PFPhoIso_corrected;}
        void calculate_PFNeuIso_corrected(){
                PFNeuIso_corrected = TMath::Max( PFNeuIso-rho*EANeu, 0.0);
        }
        Double_t get_PFNeuIso_corrected(){return PFNeuIso_corrected;}


        /*void set_PFPhoIso_corrected(const Double_t &x){PFPhoIso = x;}
        Double_t get_PFPhoIso_corrected(){return PFPhoIso;}
        void set_PFNeuIso_corrected(const Double_t &x){PFNeuIso = x;}
        Double_t get_PFNeuIso_corrected(){return PFNeuIso;}*/


	void build();
	void print();
	void print_all(vector<MyPhoton>&);
};

#endif
