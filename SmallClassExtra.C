#include "SmallClassExtra.h"

// Turn on only branches which are needed in the analysis
void SmallClassExtra::turn_on_necessary_branches(){
	fChain->SetBranchStatus("*",0);
	//other branches
	fChain->SetBranchStatus("FixedGridRhoFastjetAll",1); // needed for photon
	// genweight
	fChain->SetBranchStatus("genweight",1);
	//vertex
	fChain->SetBranchStatus("Flag_globalTightHalo2016Filter",1);
	fChain->SetBranchStatus("Flag_HBHENoiseFilter",1);
	fChain->SetBranchStatus("Flag_HBHENoiseIsoFilter",1);
        fChain->SetBranchStatus("Flag_EcalDeadCellTriggerPrimitiveFilter",1);
        fChain->SetBranchStatus("Flag_eeBadScFilter",1);
	fChain->SetBranchStatus("Flag_goodVertices",1);

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
	// muon branches
	fChain->SetBranchStatus("Muon_pt" ,1);
	fChain->SetBranchStatus("Muon_eta",1);
	fChain->SetBranchStatus("Muon_phi",1);
	fChain->SetBranchStatus("Muon_tight",1);
	fChain->SetBranchStatus("Muon_isGlobal",1);
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
	/*if(MyPhotons.size() > 1){
		MyPhotons.at(0).print_all(MyPhotons);	
	}*/
}
//build muons
void SmallClassExtra::build_muons(){
	MyMuons.clear(); 	// to reset MyMuons vector (very important)
				// if not cleared => Logical error
	for(int i=0; i < Muon_pt->size(); i++){
		MyMuon p;
		p.SetPtEtaPhiM(	Muon_pt->at(i), 
				Muon_eta->at(i), 
				Muon_phi->at(i),
				0.106
				);
		p.set_tight(Muon_tight);
		p.set_isGlobal(Muon_isGlobal);
		p.build();
		MyMuons.push_back(p);
	}
	if(MyMuons.size() > 1){
		MyMuons.at(0).print_all(MyMuons);	
	}
}

void SmallClassExtra::build_all(){
	build_photons();
	build_muons();
}
//cuts
Int_t SmallClassExtra::genweight_cut(){
	if ( genweight >= 0 ) return 1;
	else return -1;
}
//vertex cut
Int_t SmallClassExtra::vertex_cut(){
	//Well reconstructed primary vertex with | z | < 24 cm, ρ < 2 cm,
	// I put goodVertices for above but i am not sure that is 
	// the correct branch
	//Bad PF Muon Filter.
	//Bad Charged Hadron Filter.
	if ( 	Flag_globalTightHalo2016Filter          == 1 &&
		Flag_HBHENoiseFilter                    == 1 &&
		Flag_HBHENoiseIsoFilter                 == 1 &&
		Flag_EcalDeadCellTriggerPrimitiveFilter == 1 &&
		Flag_eeBadScFilter                      == 1 &&
		Flag_goodVertices                       == 1
		) return 1;
	else return -1;
}
//Trigger cut
Int_t SmallClassExtra::trigger_cut(){
	if( HLT_IsoTkMu24 > 0 || HLT_IsoMu24> 0) return 1;
	else return -1;
}
//phton cut
Int_t SmallClassExtra::photon_cut(){
	Int_t n_passed = 0;
	for(auto p: MyPhotons){
		if(p.is_passed() > 0) n_passed++;
	}
	if ( n_passed == 1 ) return 1;
	return -1;
}
//muon cut
Int_t SmallClassExtra::muon_cut(){
	Int_t n_passed = 0;
	for(auto m: MyMuons){
		if(m.is_passed() > 0 ) n_passed++;
	}
	if ( n_passed >= 1 ) return 1;
	return -1;
}
