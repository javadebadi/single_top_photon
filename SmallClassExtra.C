#include "SmallClassExtra.h"

// Turn on only branches which are needed in the analysis
void SmallClassExtra::turn_on_necessary_branches(){
	fChain->SetBranchStatus("*",0);
	//other branches
	fChain->SetBranchStatus("FixedGridRhoFastjetAll",1); // needed for photon
	// trigger branches
	fChain->SetBranchStatus("HLT_IsoTkMu24",1);
	fChain->SetBranchStatus("HLT_IsoMu24"  ,1);
	// photon branches
	fChain->SetBranchStatus("Photon_pt" ,1);
	fChain->SetBranchStatus("Photon_eta",1);
	fChain->SetBranchStatus("Photon_phi",1);
	fChain->SetBranchStatus("Photon_HoverE",1);
	fChain->SetBranchStatus("Photon_phoR9",0);//off
	fChain->SetBranchStatus("Photon_SigmaIEtaIEta",1);
	fChain->SetBranchStatus("Photon_SigmaIPhiIPhi",0); // off
	fChain->SetBranchStatus("Photon_PFChIso",1);
	fChain->SetBranchStatus("Photon_PFPhoIso",1);
	fChain->SetBranchStatus("Photon_PFNeuIso",1);
	fChain->SetBranchStatus("Photon_EleVeto",1);
	fChain->SetBranchStatus("Photon_hasPixelSeed",1);
	fChain->SetBranchStatus("Photon_mcMatchId",0); // off
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
		//p.set_phoR9(Photon_phoR9->at(i)); // MUST be off because branch is off
		p.set_SigmaIEtaIEta(Photon_SigmaIEtaIEta->at(i));
		//p.set_SigmaIPhiIPhi(Photon_SigmaIPhiIPhi->at(i));
		p.set_PFChIso(Photon_PFChIso->at(i));
		p.set_PFPhoIso(Photon_PFPhoIso->at(i));
		p.set_PFNeuIso(Photon_PFNeuIso->at(i));
		p.set_EleVeto(Photon_EleVeto->at(i));
		p.set_hasPixelSeed(Photon_hasPixelSeed->at(i));
		//p.set_mcMatchId(Photon_mcMatchId->at(i));
		p.set_rho(FixedGridRhoFastjetAll);
		p.build();
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
