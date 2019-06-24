#ifndef SMALLCLASSEXTRA_H_INCLUDED
#define SMALLCLASSEXTRA_H_INCLUDED

#include "SmallClass.h"
#include "TLorentzVector.h"
#include <vector>
#include "MyPhoton.h"
#include "MyMuon.h"
#include "MyElectron.h"
#include "MyJet.h"
#include "MyMET.h"
#include "MyGenParticle.h"
#include "./MyUtils/VectorDouble_t.h"
#include "./MyUtils/VectorVectorDouble_t.h"
#include "./PileUp_SF/PileUp_SF.h"
#include "./PileUp_SF/PileUp_SFLow.h"
#include "./PileUp_SF/PileUp_SFUp.h"

class SmallClassExtra: public SmallClass{
public:
	vector<MyPhoton>   MyPhotons;
	vector<MyMuon>     MyMuons;
	vector<MyElectron> MyElectrons;
	vector<MyJet>      MyJets;
	vector<MyMET>      MyMETs;
	vector<MyPhoton>   MySelectedPhotons;
	vector<MyMuon>     MySelectedMuons;
	vector<MyJet>      MySelectedJets;
	vector<MyJet>      MySelectedBJets;
	vector<MyGenParticle> MyGenParticles;
	vector<MyGenParticle> MyMatchedGenParticlePhotons;
	VectorDouble_t     Navigator;
	VectorDouble_t     tempVectorDouble_t;
	Double_t           PileUp_SF;
	Double_t           PileUp_SFLow;
	Double_t           PileUp_SFUp;
	Double_t           cleaning_radius = 0.15;
	
	// Turn on only branches which are needed
	void turn_on_necessary_branches();

	//build objects
	//build photon
	void build_photons();
	void build_muons();
	void build_electrons();
	void build_jets();
	void build_pileUp_SF();
	void cleaning_error_message(const TString & s);
	void jet_photon_cleaning();
	void jet_electron_cleaning();
	void jet_muon_cleaning();
	void jet_lepton_cleaning();
	void build_met();
	void build_gens();
	void match_gens_MySelectedPhotons();
	void build_all();
	void build_selected_jets();
	Double_t scale();

	// cuts
	Int_t genweight_cut();
	//primary vertex and filter
	Int_t vertex_cut();
	// Trigger cut
	Int_t trigger_cut();
	Int_t photons_cut();
	Int_t muons_cut();
	Int_t electrons_cut();
	Int_t jets_cut();
	Int_t met_cut();
	Int_t other_cut();	

	// build and cut
	Int_t build_cut_photons();
	Int_t build_cut_muons();
	Int_t build_cut_electrons();
	Int_t build_cut_jets();
	Int_t build_cut_met();

	//plots
	VectorVectorDouble_t DeltaR_jet_photon_before_cleaning_accumulated;
	VectorVectorDouble_t DeltaR_jet_photon_after_cleaning_accumulated;
	void find_DeltaR_MyJets_MySelectedPhotons();  // it is important where you use 
					// this method, look at jet_build_cut
					// method to find out why
	void plot_all();
};

#endif
