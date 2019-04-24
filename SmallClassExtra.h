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

class SmallClassExtra: public SmallClass{
public:
	vector<MyPhoton>   MyPhotons;
	vector<MyMuon>     MyMuons;
	vector<MyElectron> MyElectrons;
	vector<MyJet>      MyJets;
	vector<MyMET>      MyMETs;
	
	// Turn on only branches which are needed
	void turn_on_necessary_branches();

	//build objects
	//build photon
	void build_photons();
	void build_muons();
	void build_electrons();
	void build_jet();
	void build_met();
	void build_all();

	// cuts
	Int_t genweight_cut();
	//primary vertex and filter
	Int_t vertex_cut();
	// Trigger cut
	Int_t trigger_cut();
	Int_t photon_cut();
	Int_t muon_cut();
	Int_t electron_cut();
	Int_t jet_cut();
	Int_t met_cut();	

};

#endif
