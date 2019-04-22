#include "MyElectron.h"
void MyElectron::calculate_RelCombPFIsoWithEACorrection(){
	RelCombPFIsoWithEACorrection = TMath::Max(PFIso-rho*EA,0.0);
}
void MyElectron::calculate_OneOverEMinusOneOverP(){
	OneOverEMinusOneOverP = TMath::Abs( 1.0/(SCE) - 1.0/(P()) );
}	

void MyElectron::build(){
	// NOT COMPLETE 
	// set_EA()... or calculate_EA using something form eGamma2016 ID directory
	set_EA(eGamma2016_ID::calculate_EA(SCEta));
	calculate_RelCombPFIsoWithEACorrection();
	calculate_OneOverEMinusOneOverP();
}

Int_t MyElectron::is_passed(){
	if ( SCEta < eGamma2016_ID::SCEta){	//check conditions when 
						//Super Cluster eta is in barrel
		if ( Pt() < eGamma2016_ID::SCBarrelVeto::Pt ) return -1;
		if ( HoverE > eGamma2016_ID::SCBarrelVeto::HoverE ) return -1;
		if ( SigmaIEtaIEta > eGamma2016_ID::SCBarrelVeto::SigmaIEtaIEta ) return -1;
		if ( DeltaEtaInSeed > eGamma2016_ID::SCBarrelVeto::DeltaEtaInSeed ) return -1;
		if ( DeltaPhiInSeed > eGamma2016_ID::SCBarrelVeto::DeltaPhiInSeed ) return -1;
		if ( RelCombPFIsoWithEACorrection > eGamma2016_ID::SCBarrelVeto::RelCombPFIsoWithEACorrection ) return -1;
		if ( OneOverEMinusOneOverP > eGamma2016_ID::SCBarrelVeto::OneOverEMinusOneOverP) return -1;
		if ( ExpectedMissingInnerHits > eGamma2016_ID::SCBarrelVeto::ExpectedMissingInnerHits) return -1;
		if ( PassConversionVeto != eGamma2016_ID::SCBarrelVeto::PassConversionVeto) return -1;
		return 1;	
	}
	else{
		if ( Pt() < eGamma2016_ID::SCEndcapVeto::Pt ) return -1;
		if ( HoverE > eGamma2016_ID::SCEndcapVeto::HoverE ) return -1;
		if ( SigmaIEtaIEta > eGamma2016_ID::SCEndcapVeto::SigmaIEtaIEta ) return -1;
		if ( DeltaEtaInSeed > eGamma2016_ID::SCEndcapVeto::DeltaEtaInSeed ) return -1;
		if ( DeltaPhiInSeed > eGamma2016_ID::SCEndcapVeto::DeltaPhiInSeed ) return -1;
		if ( RelCombPFIsoWithEACorrection > eGamma2016_ID::SCEndcapVeto::RelCombPFIsoWithEACorrection ) return -1;
		if ( OneOverEMinusOneOverP > eGamma2016_ID::SCEndcapVeto::OneOverEMinusOneOverP) return -1;
		if ( ExpectedMissingInnerHits > eGamma2016_ID::SCEndcapVeto::ExpectedMissingInnerHits) return -1;
		if ( PassConversionVeto != eGamma2016_ID::SCEndcapVeto::PassConversionVeto) return -1;
		return 1;	
	}
}

void MyElectron::print(){

        cout<<"(Pt,Eta,Phi,E) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"P                        = "<<P()<<endl;
	cout<<"HoverE                   = "<<HoverE<<endl;
	cout<<"SigmaIEtaIEta            = "<<SigmaIEtaIEta<<endl;
	cout<<"SigmaIPhiIPhi            = "<<SigmaIPhiIPhi<<endl;
	cout<<"DeltaEtaInSeed           = "<<DeltaEtaInSeed<<endl;
	cout<<"DeltaPhiInSeed           = "<<DeltaPhiInSeed<<endl;
	cout<<"SCE                      = "<<SCE<<endl;
	cout<<"SCEt                     = "<<SCEt<<endl;
	cout<<"SCEta                    = "<<SCEta<<endl;
	cout<<"OneOverEMinusOneOverP    = "<<OneOverEMinusOneOverP<<endl;
	cout<<"ExpectedMissingInnerHits = "<<ExpectedMissingInnerHits<<endl;
        cout<<"PassConversionVeto       = "<<PassConversionVeto<<endl;
	cout<<"PFIso                    = "<<PFIso<<endl;
	cout<<"EA                       = "<<EA<<endl;
	cout<<"rho                      = "<<rho<<endl;
	cout<<"RelCombPFIsoWithEACorrection = "<<RelCombPFIsoWithEACorrection<<endl;
	cout<<"is_passed()              = "<<is_passed()<<endl;
	cout<<"----------------------------------------------"<<endl;
}

void MyElectron::print_all(vector<MyElectron> &MyElectrons){
	cout<<"============== vector of electrons ============="<<endl;
	for(auto &p: MyElectrons){
		p.print();
	}
}
