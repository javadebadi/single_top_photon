#include "SmallClassExtra.h"

// Turn on only branches which are needed in the analysis
void SmallClassExtra::turn_on_necessary_branches(){
	fChain->SetBranchStatus("*",0);
	// trigger branches
	fChain->SetBranchStatus("HLT_IsoTkMu24",1);
	fChain->SetBranchStatus("HLT_IsoMu24"  ,1);
	// photon branches
	fChain->SetBranchStatus("Photon_pt" ,1);
	fChain->SetBranchStatus("Photon_eta",1);
	fChain->SetBranchStatus("Photon_phi",1);
	fChain->SetBranchStatus("Photon_HoverE",1);
}

//build objects
//build photon
void SmallClassExtra::build_photons(){
	MyPhotons.clear(); 	// to reset MyPhotons vector (very important)
				// if not cleared => Logical error
	for(int i=0; i < Photon_pt->size(); i++){
		MyPhoton p;
		p.SetPtEtaPhiM(	Photon_pt->at(i), 
				Photon_eta->at(i), 
				Photon_phi->at(i),
				0
				);
		p.set_HoverE(Photon_HoverE->at(i));
		MyPhotons.push_back(p);
	}
	if(MyPhotons.size() > 1){
		MyPhotons.at(0).print_all(MyPhotons);	
	}
}

//cuts
//Trigger cut
Int_t SmallClassExtra::trigger_cut(){
	if( HLT_IsoTkMu24 > 0 || HLT_IsoMu24> 0) return 1;
	else return -1;
}
