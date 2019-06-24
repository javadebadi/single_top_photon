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
	//pileUp
	fChain->SetBranchStatus("nTrueInt",1);
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
	fChain->SetBranchStatus("Muon_chi2_globaltrk",1);
	fChain->SetBranchStatus("Muon_pf",1);
	fChain->SetBranchStatus("Muon_validHits",1);
	fChain->SetBranchStatus("Muon_matchedStat",1);
	fChain->SetBranchStatus("Muon_dB",1);
	fChain->SetBranchStatus("Muon_besttrack_dz",1);
	fChain->SetBranchStatus("Muon_validHitsInner",1);
	fChain->SetBranchStatus("Muon_TLayers",1);
	fChain->SetBranchStatus("Muon_isTrackerMuon",1);
	fChain->SetBranchStatus("Muon_isoCharged",1);
	fChain->SetBranchStatus("Muon_isoNeutralHadron",1);
	fChain->SetBranchStatus("Muon_isoPhoton",1);
	fChain->SetBranchStatus("Muon_isoPU",1);

	// electron branches
	fChain->SetBranchStatus("patElectron_pt", 1);
	fChain->SetBranchStatus("patElectron_eta",1);
	fChain->SetBranchStatus("patElectron_phi",1);
	fChain->SetBranchStatus("patElectron_expectedMissingInnerHits",1);
	fChain->SetBranchStatus("patElectron_passConversionVeto",1);
	fChain->SetBranchStatus("PatEle_HOverE",  1);
	fChain->SetBranchStatus("PatEle_ScEt",    1);
	fChain->SetBranchStatus("PatEle_EtaSc",   1);
	fChain->SetBranchStatus("PatEle_DeltaPhiIn",1);
	fChain->SetBranchStatus("PatEle_DeltaEtaIn",1);
	fChain->SetBranchStatus("PatEle_SigmaIetaIeta",1);
	fChain->SetBranchStatus("PatEle_superCluster_energy",1);
	fChain->SetBranchStatus("PatEle_DeltaEtaIn",1);
	fChain->SetBranchStatus("PatEle_DeltaPhiIn",1);
	fChain->SetBranchStatus("PatEle_relIso03",1);

	// Jet branches
	fChain->SetBranchStatus("Jet_pt",1);
	fChain->SetBranchStatus("Jet_eta",1);
	fChain->SetBranchStatus("Jet_phi",1);
	fChain->SetBranchStatus("Jet_mass",1);
	fChain->SetBranchStatus("Jet_neutralHadEnergyFraction",1);
	fChain->SetBranchStatus("Jet_neutralEmEmEnergyFraction",1);
	fChain->SetBranchStatus("Jet_chargedHadronEnergyFraction",1);
	fChain->SetBranchStatus("Jet_chargedEmEnergyFraction",1);
	fChain->SetBranchStatus("Jet_muonEnergyFraction",1);
	fChain->SetBranchStatus("Jet_numberOfConstituents",1);
	fChain->SetBranchStatus("Jet_chargedMultiplicity",1);
	fChain->SetBranchStatus("Jet_neutralMultiplicity",1);
	fChain->SetBranchStatus("Jet_bDiscriminator_pfCISVV2",1);
	fChain->SetBranchStatus("Jet_mcMatchFlav",1);

	// met branches
	fChain->SetBranchStatus("Met_type1PF_pt",1);
	fChain->SetBranchStatus("Met_type1PF_phi",1);

	// Genertor level
	fChain->SetBranchStatus("Gen_pt",1);
	fChain->SetBranchStatus("Gen_eta",1);
	fChain->SetBranchStatus("Gen_phi",1);
	fChain->SetBranchStatus("Gen_mass",1);
	fChain->SetBranchStatus("Gen_pdg_id",1);
	fChain->SetBranchStatus("Gen_status",1);
	fChain->SetBranchStatus("Gen_motherpdg_id",1);
	fChain->SetBranchStatus("Gen_grandmotherId",1);
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
		p.set_tight(Muon_tight->at(i));
		p.set_isGlobal(Muon_isGlobal->at(i));
		p.set_isPF(Muon_pf->at(i));
		p.set_globalTrackNormalizedChi2(Muon_chi2_globaltrk->at(i));
		p.set_globalTrackHitPatternNumberOfValidMuonHits(Muon_validHits->at(i));
		p.set_numberOfMatchedStations(Muon_matchedStat->at(i));
		p.set_dB(Muon_dB -> at(i) );
		p.set_muonBestTrackdz(Muon_besttrack_dz->at(i) );
		p.set_innerTrackHitPatternNumberOfValidPixelHits(Muon_validHitsInner->at(i));
		p.set_innerTrackHitPatternTrackerLayersWithMeasurement(Muon_TLayers->at(i));
		p.set_isTrackerMuon(Muon_isTrackerMuon->at(i));
		p.set_isoCharged(Muon_isoCharged ->at(i));
		p.set_isoNeutralHadron(Muon_isoNeutralHadron ->at(i));
		p.set_isoPhoton(Muon_isoPhoton ->at(i));
		p.set_isoPU(Muon_isoPU ->at(i));
		p.build();
		MyMuons.push_back(p);
	}
	/*if(MyMuons.size() > 1){
		MyMuons.at(0).print_all(MyMuons);	
	}*/
}

//build electrons
void SmallClassExtra::build_electrons(){
	MyElectrons.clear();
	for(int i=0; i< patElectron_pt->size() ; i++){
		MyElectron e;
		e.SetPtEtaPhiM( patElectron_pt->at(i),
				patElectron_eta->at(i),
				patElectron_phi->at(i),
				0.0005
				);
		e.set_ExpectedMissingInnerHits(patElectron_expectedMissingInnerHits->at(i));
		e.set_PassConversionVeto(patElectron_passConversionVeto->at(i));
		e.set_HoverE(PatEle_HOverE->at(i));
		e.set_SigmaIEtaIEta(PatEle_SigmaIetaIeta->at(i));
		e.set_DeltaPhiInSeed(PatEle_DeltaPhiIn->at(i));
		e.set_DeltaEtaInSeed(PatEle_DeltaEtaIn->at(i));
		e.set_SCE(PatEle_superCluster_energy->at(i));
		e.set_SCEt(PatEle_ScEt->at(i));
		e.set_SCEta(PatEle_EtaSc->at(i));
		e.set_PFIso(PatEle_relIso03->at(i));
                e.set_rho(FixedGridRhoFastjetAll);
		e.build();
		MyElectrons.push_back(e);
	}
	/*if(MyElectrons.size() > 1){
		MyElectrons.at(0).print_all(MyElectrons);	
	}*/
}
//build jets
void SmallClassExtra::build_jets(){
	MyJets.clear();
	// NOT COMPLETE at all
	for(int i=0; i < Jet_pt->size(); i++){
		MyJet j;
		j.SetPtEtaPhiM(	Jet_pt   ->at(i),
				Jet_eta  ->at(i),
				Jet_phi  ->at(i),
				Jet_mass ->at(i));
		j.set_NHF( Jet_neutralHadEnergyFraction                   ->at(i));
		j.set_NEMF(Jet_neutralEmEmEnergyFraction                  ->at(i));
		j.set_CHF( Jet_chargedHadronEnergyFraction                ->at(i));
		j.set_CEMF(Jet_chargedEmEnergyFraction                    ->at(i));
		j.set_MUF( Jet_muonEnergyFraction                         ->at(i));
		j.set_NumConst(Jet_numberOfConstituents                   ->at(i));
		j.set_CHM( Jet_chargedMultiplicity                        ->at(i));
		j.set_NumNeutralParticles(Jet_neutralMultiplicity         ->at(i));
		j.set_bDiscriminator_pfCISVV2(Jet_bDiscriminator_pfCISVV2 ->at(i));
		j.set_jetFlavor(Jet_mcMatchFlav                           ->at(i));
		j.set_OP("medium");
		j.build();
		MyJets.push_back(j);
	}
	/*if(MyJets.size() > 1){
		MyJets.at(0).print_all(MyJets);	
	}*/
}
// cleaning error message
//void cleaning_error_message(const TString){}
void SmallClassExtra::cleaning_error_message(const TString & s){
	cout<<"An event with no Jets after "<<s<<endl;
}
//jet photon cleaning
void SmallClassExtra::jet_photon_cleaning(){
	vector<int> index;
	for(auto m: MyPhotons){
		for(int i=0; i<MyJets.size(); i++){
			if( MyJets.at(i).DeltaR(m) < cleaning_radius ) index.push_back(i);
		}
	}
	for(int t1 = index.size()-1; t1 >= 0; --t1){
		if(MyJets.size() == 0 && t1 == 0){
			cleaning_error_message("jet_photon_cleaning");
		}
    		else MyJets.erase(MyJets.begin()+index.at(t1));
	}
}
// jet electron cleaning
void SmallClassExtra::jet_electron_cleaning(){

	vector<int> index;
	for(auto m: MyElectrons){
		for(int i=0; i<MyJets.size(); i++){
			if( MyJets.at(i).DeltaR(m) < cleaning_radius) index.push_back(i);
		}
	}
	for(int t1 = index.size()-1; t1 >= 0; --t1){
		if(MyJets.size() == 0 && t1 == 0){
			cleaning_error_message("jet_electron_cleaning");
		}
    		else MyJets.erase(MyJets.begin()+index.at(t1));
	}
}
// jet muon cleaning
void SmallClassExtra::jet_muon_cleaning(){

	vector<int> index;
	/*for(int i=0; i<MyJets.size(); i++){
		//Navigator.push_back(MyJets.at(i).DeltaR(MySelectedMuons.at(0)) );
		if( MyJets.at(i).DeltaR(MySelectedMuons.at(0)) < 0.15 ) index.push_back(i);
	}*/
	for(auto m: MyMuons){
		for(int i=0; i<MyJets.size(); i++){
			if( MyJets.at(i).DeltaR(m) < cleaning_radius ) index.push_back(i);
		}
	}
	for(int t1 = index.size()-1; t1 >= 0; --t1){
		if(MyJets.size() == 0 && t1 == 0){
			cleaning_error_message("jet_muon_cleaning");
		}
    		else MyJets.erase(MyJets.begin()+index.at(t1));
	}
	for(int i=0; i<MyJets.size(); i++){
		//Navigator.push_back(MyJets.at(i).DeltaR(MySelectedMuons.at(0)) );
	}
}

//jet lepton cleaning
void SmallClassExtra::jet_lepton_cleaning(){
	jet_electron_cleaning();
	jet_muon_cleaning();
}
// build met
void SmallClassExtra::build_met(){
	MyMETs.clear();
	MyMET m;
	m.SetPtEtaPhi(Met_type1PF_pt , 0.00000, Met_type1PF_phi);
	MyMETs.push_back(m);
	//m.print();
}
//build GenParticles
void SmallClassExtra::build_gens(){
	MyGenParticles.clear();
	for(int i=0; i< Gen_pt->size() ; i++){
		MyGenParticle e;
		e.SetPtEtaPhiM( Gen_pt->at(i),
				Gen_eta->at(i),
				Gen_phi->at(i),
				Gen_mass->at(i)
				);
		//e.build();
		e.set_ID( Gen_pdg_id                    -> at(i) );
		e.set_Mother_ID( Gen_motherpdg_id       -> at(i) );
		e.set_Status( Gen_status                -> at(i) );
		e.set_GrandMother_ID( Gen_grandmotherId -> at(i) );
		MyGenParticles.push_back(e);
	}
	/*if(MyGenParticles.size() > 1){
		MyGenParticles.at(0).print_all(MyGenParticles);	
	}*/
}
// match GenParticle with photon
void SmallClassExtra::match_gens_MySelectedPhotons(){
	MyMatchedGenParticlePhotons.clear();
	// find all matches with selectd photon
	for(auto g: MyGenParticles){
		if ( g.get_Status() != 1 ) continue;
		else if ( g.is_matched(MySelectedPhotons.at(0)) == false) continue;
		else MyMatchedGenParticlePhotons.push_back(g);
	}
	// select the one with maximum match
	if( MyMatchedGenParticlePhotons.size() > 1 ){
			//sort according to decreasing chi value 
		for(int i=0; i< MyMatchedGenParticlePhotons.size(); i++){
			for(int j=0; j<i; j++){
				if(MyMatchedGenParticlePhotons.at(i).chi(MySelectedPhotons.at(0)) < MyMatchedGenParticlePhotons.at(j).chi(MySelectedPhotons.at(0)) ){
					swap( MyMatchedGenParticlePhotons.at(i), MyMatchedGenParticlePhotons.at(j) ); 
					//cout<<MyMatchedGenParticlePhotons.at(0).chi(MySelectedPhotons.at(0))<<endl;
					//cout<<MyMatchedGenParticlePhotons.at(1).chi(MySelectedPhotons.at(0))<<endl;
				}
			}
		}
	}
	//cout<<"========"<<endl;
}

//build pileUp
void SmallClassExtra::build_pileUp_SF(){
	PileUp_SF    = pileUp_SF(nTrueInt);
	PileUp_SFLow = pileUp_SFLow(nTrueInt);
	PileUp_SFUp  = pileUp_SFUp(nTrueInt);
}
//build all objects
void SmallClassExtra::build_all(){
	build_photons();
	build_muons();
	build_electrons();
	build_jets();
	build_met();
}
//build selected jets
void SmallClassExtra::build_selected_jets(){
	MySelectedJets.clear();
	for(auto j:MyJets){
		if(j.is_passed() > 0 && j.is_b_tagged() < 0){
			MySelectedJets.push_back(j);
		}
		else if (j.is_passed() > 0 && j.is_b_tagged() > 0){
			MySelectedBJets.push_back(j);
		}
	}
	/*if(MySelectedBJets.size() > 1){
		MySelectedBJets.at(0).print_all(MySelectedBJets);	
	}*/
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
Int_t SmallClassExtra::photons_cut(){
	MySelectedPhotons.clear();
	Int_t n_passed = 0;
	for(auto p: MyPhotons){
		if(p.is_passed() > 0){
			n_passed++;
			MySelectedPhotons.push_back(p);
		}
	}
	if ( n_passed == 1 ) return 1;
	return -1;
}
//muon cut
Int_t SmallClassExtra::muons_cut(){
	MySelectedMuons.clear();
	Int_t n_passed = 0;
	Int_t n_further_passed = 0;
	for(auto m: MyMuons){
		if(m.is_passed()         > 0 ){
			n_passed++;
			MySelectedMuons.push_back(m);
		}
		else if(m.is_further_passed() > 0 ) n_further_passed++;
	}

	if ( n_passed != 1 || n_further_passed >= 1) return -1;
	return 1;
}
//electron cut
Int_t SmallClassExtra::electrons_cut(){
	// veto event if one or more electron are passed
	Int_t n_passed = 0;
	for(auto e: MyElectrons){
		if(e.is_passed() > 0 ) n_passed++;
	}
	if(n_passed > 0) return -1 ;
	else return 1;
}	
//jet cut
Int_t SmallClassExtra::jets_cut(){
	//NOT COMPLETE
	Int_t n_passed   = 0;
	Int_t n_b_tagged = 0;
	for(auto j: MyJets){
		if(j.is_passed() > 0 ) n_passed++;
		if(j.is_passed() > 0 && j.is_b_tagged() > 0 ) n_b_tagged++;
	}
	if ( n_b_tagged != 1 ) return -1;
	if ( n_passed    < 2 ) return -1;

	for( auto j: MyJets){
		if ( j.DeltaR(MySelectedMuons.at(0)) < 0.3) return -1;
	}
	return 1;
}
//met cut
Int_t SmallClassExtra::met_cut(){
	Int_t n_passed = 0;
	for(auto m: MyMETs){
		if ( m.is_passed() > 0 ) n_passed++;
	}
	if(n_passed != 1 ) return -1;
	return 1;
}
//othe cut
Int_t SmallClassExtra::other_cut(){
	if ( MySelectedMuons.at(0).DeltaR(MySelectedPhotons.at(0)) <= 0.5 ) return -1;
	if ( MySelectedBJets.at(0).DeltaR(MySelectedPhotons.at(0)) <= 0.5 ) return -1;
	for(auto j: MySelectedJets){
		if( j.DeltaR(MySelectedPhotons.at(0)) <= 0.5 ) return -1;
	}
	return 1;
}


//build and cut simulatenously ( I added this part to code becuase the code was too slow)
// In previous approach first I built all objects then applied cuts, which was very time consuming

Int_t SmallClassExtra::build_cut_photons(){
	build_photons();
	return photons_cut();
}
Int_t SmallClassExtra::build_cut_muons(){
	build_muons();
	return muons_cut();
}
Int_t SmallClassExtra::build_cut_electrons(){
	build_electrons();
	return electrons_cut();
}
Int_t SmallClassExtra::build_cut_jets(){
	build_jets();
	find_DeltaR_MyJets_MySelectedPhotons();
	DeltaR_jet_photon_before_cleaning_accumulated.push_back(tempVectorDouble_t);
	jet_photon_cleaning();
	find_DeltaR_MyJets_MySelectedPhotons();
	DeltaR_jet_photon_after_cleaning_accumulated.push_back(tempVectorDouble_t);
	jet_lepton_cleaning();
	return jets_cut();
}
Int_t SmallClassExtra::build_cut_met(){
	build_met();
	return met_cut();
}

void SmallClassExtra::find_DeltaR_MyJets_MySelectedPhotons(){
	tempVectorDouble_t.clear();
	for(auto j: MyJets){
		tempVectorDouble_t.push_back(j.DeltaR(MySelectedPhotons.at(0)) );
	}
	
}
//plot
void SmallClassExtra::plot_all(){
	DeltaR_jet_photon_before_cleaning_accumulated.write_to_root("DeltaR_jet_photon_before_cleaning");
	DeltaR_jet_photon_after_cleaning_accumulated.write_to_root("DeltaR_jet_photon_after_cleaning");
}

//scale (SF impact on efficiency)
Double_t SmallClassExtra::scale(){
	//return PileUp_SF;
	//return MySelectedPhotons.at(0).get_SFUp();
	//return MySelectedBJets.at(0).get_SFUp();
	//return MySelectedBJets.at(0).get_SFLow()*MySelectedPhotons.at(0).get_SFLow()*PileUp_SFLow;
	return MySelectedBJets.at(0).get_SF()*MySelectedPhotons.at(0).get_SF()*PileUp_SF;
	//return MySelectedBJets.at(0).get_SF()*MySelectedPhotons.at(0).get_SF()*PileUp_SF;
}
