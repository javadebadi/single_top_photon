#include "MyPhoton.h"

void MyPhoton::build(){

	// Apply Working Points of Photon ID Summer17_v2_ID
	set_EACh(PhotonID_Summer17_v2_ID::calculate_EACh(Eta()));
	set_EAPho(PhotonID_Summer17_v2_ID::calculate_EAPho(Eta()));
	set_EANeu(PhotonID_Summer17_v2_ID::calculate_EANeu(Eta()));

	calculate_PFChIso_corrected();
	calculate_PFPhoIso_corrected();
	calculate_PFNeuIso_corrected();
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
	cout<<"----------------------------------------------"<<endl;
}

void MyPhoton::print_all(vector<MyPhoton> &MyPhotons){
	cout<<"============== vector of photons ============="<<endl;
	for(auto &p: MyPhotons){
		p.print();
	}
}
