#ifndef SMALLCLASSEXTRA_H_INCLUDED
#define SMALLCLASSEXTRA_H_INCLUDED

#include "SmallClass.h"
#include "TLorentzVector.h"
#include <vector>
#include "MyPhoton.h"
#include "PhotonID.h"

class SmallClassExtra: public SmallClass{
public:
	vector<MyPhoton> MyPhotons;
	
	// Turn on only branches which are needed
	void turn_on_necessary_branches();

	//build objects
	//build photon
	void build_photons();
	void build_all();

	// cuts
	Int_t genweight_cut();
	//primary vertex and filter
	Int_t vertex_cut();
	// Trigger cut
	Int_t trigger_cut();
	Int_t photon_cut();
	
};

#endif
