#ifndef SMALLCLASSEXTRA_H_INCLUDED
#define SMALLCLASSEXTRA_H_INCLUDED

#include "SmallClass.h"
#include "TLorentzVector.h"
#include <vector>
#include "MyPhoton.h"

class SmallClassExtra: public SmallClass{
public:
	vector<MyPhoton> MyPhotons;
	
	// Turn on only branches which are needed
	void turn_on_necessary_branches();

	// cuts
	// Trigger cut
	Int_t trigger_cut();
};

#endif
