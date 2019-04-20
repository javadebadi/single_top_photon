#include "MyElectron.h"
void MyElectron::calculate_OneOverEMinusOneOverP(){
	OneOverEMinusOneOverP = TMath::Abs( 1.0/(SCE) - 1.0/(P()) );
}	

void MyElectron::build(){
	calculate_OneOverEMinusOneOverP();
}


Int_t MyElectron::is_tight(){
	/*if ( HoverE             > electron_barrel_tight.HoverE ) return -1;
	if ( SigmaIEtaIEta      > electron_barrel_tight.SigmaIEtaIEta ) return -1;
	if ( PFChIso_corrected  > electron_barrel_tight.PFChIso_corrected) return -1;
	if ( PFPhoIso_corrected > electron_barrel_tight.PFPhoIso_corrected) return -1;
	if ( PFNeuIso_corrected > electron_barrel_tight.PFNeuIso_corrected) return -1;*/
	return 1;
}

Int_t MyElectron::is_passed(){
	if ( Pt() < 20 ) return -1;	// has low energy: bad
	//if ( TMath::Abs(Eta()) > 1.4442 ) return -1; // out of barrel: bad
	//if ( is_tight() < 0 ) return -1; // not tight:bad
	return 1;
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
	cout<<"is_tight()               = "<<is_tight()<<endl;
	cout<<"is_passed()              = "<<is_passed()<<endl;
	cout<<"----------------------------------------------"<<endl;
}

void MyElectron::print_all(vector<MyElectron> &MyElectrons){
	cout<<"============== vector of electrons ============="<<endl;
	for(auto &p: MyElectrons){
		p.print();
	}
}
