#include "MyPhoton.h"

void MyPhoton::build(){

	// Apply Working Points of Photon ID Summer17_v2_ID
	//set_EACh(PhotonID_Summer17_v2_ID::calculate_EACh(Eta()));
	set_EACh(photon_calculate_EACh(Eta()));
	set_EAPho(PhotonID_Summer17_v2_ID::calculate_EAPho(Eta()));
	set_EANeu(PhotonID_Summer17_v2_ID::calculate_EANeu(Eta()));
	photon_barrel_tight.reset_with_pt(Pt());

	calculate_PFChIso_corrected();
	calculate_PFPhoIso_corrected();
	calculate_PFNeuIso_corrected();

	// scale factor
	SF = photon_SF(Eta(),Pt());
}


Int_t MyPhoton::is_tight(){
	if ( HoverE             > photon_barrel_tight.HoverE ) return -1;
	if ( SigmaIEtaIEta      > photon_barrel_tight.SigmaIEtaIEta ) return -1;
	if ( PFChIso_corrected  > photon_barrel_tight.PFChIso_corrected) return -1;
	if ( PFPhoIso_corrected > photon_barrel_tight.PFPhoIso_corrected) return -1;
	if ( PFNeuIso_corrected > photon_barrel_tight.PFNeuIso_corrected) return -1;
	return 1;
}

Int_t MyPhoton::is_passed(){
	if ( Pt() < 25 ) return -1;	// has low energy: bad
	if ( TMath::Abs(Eta()) > 1.4442 ) return -1; // out of barrel: bad
	if ( is_tight() < 0 ) return -1; // not tight:bad
	if ( EleVeto == 0 ) return -1;	// veto electrons misidentfield 
	if ( hasPixelSeed == 1 ) return -1; // pixel seed
	return 1;
}

void MyPhoton::print(){

        cout<<"(Pt,Eta,Phi,E) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"HoverE             = "<<HoverE<<endl;
	cout<<"phoR9              = "<<phoR9<<endl;
	cout<<"SigmaIEtaIEta      = "<<SigmaIEtaIEta<<endl;
	cout<<"SigmaIPhiIPhi      = "<<SigmaIPhiIPhi<<endl;
	cout<<"PFChIso            = "<<PFChIso<<endl;
	cout<<"PFPhoIso           = "<<PFPhoIso<<endl;
	cout<<"PFNeuIso           = "<<PFNeuIso<<endl;
	cout<<"EleVeto            = "<<EleVeto<<endl;
	cout<<"hasPixelSeed       = "<<hasPixelSeed<<endl;
	cout<<"mcMatchId          = "<<mcMatchId<<endl;
	cout<<"EACh               = "<<EACh<<endl;
	cout<<"EAPho              = "<<EAPho<<endl;
	cout<<"EANeu              = "<<EANeu<<endl;
	cout<<"rho                = "<<rho<<endl;
	cout<<"PFChIso_corrected  = "<<PFChIso_corrected<<endl;
	cout<<"PFPhoIso_corrected = "<<PFPhoIso_corrected<<endl;
	cout<<"PFNeuIso_corrected = "<<PFNeuIso_corrected<<endl;
	cout<<"is_tight()         = "<<is_tight()<<endl;
	cout<<"is_passed()        = "<<is_passed()<<endl;
	cout<<"Scale Factor       = "<<SF<<endl;
	cout<<"----------------------------------------------"<<endl;
}

void MyPhoton::print_all(vector<MyPhoton> &MyPhotons){
	cout<<"============== vector of photons ============="<<endl;
	for(auto &p: MyPhotons){
		p.print();
	}
}
