#include "MyJet.h"
void MyJet::find_jetFlavorstring(){
	if( jetFlavor == 0) jetFlavorstring = "non";
	else if( jetFlavor == 1) jetFlavorstring = "d";
	else if( jetFlavor == 2) jetFlavorstring = "u";
	else if( jetFlavor == 3) jetFlavorstring = "s";
	else if( jetFlavor == 4) jetFlavorstring = "c";
	else if( jetFlavor == 5) jetFlavorstring = "b";
	else{
		cout<<"Error: Unexpected jatFlavor: look at MyJet::find_jetFlavorstring()"<<endl;
		cout<<"jetFlavor (nTrueInt) was : "<<jetFlavor<<endl;
		exit(1);
	}
}

void MyJet::build(){
	find_jetFlavorstring();	
	SF    = bJet_SF   (Eta(), Pt(), get_jetFlavorstring() , get_OP());
	SFLow = bJet_SFLow(Eta(), Pt(), get_jetFlavorstring() , get_OP());
	SFUp  = bJet_SFUp (Eta(), Pt(), get_jetFlavorstring() , get_OP());
}

Int_t MyJet::is_loose(){
	//For 2016
	if(
		(NHF<0.99 && NEMF<0.99 && NumConst>1) && 
		(
			(TMath::Abs(Eta())<=2.4 && CHF>0 && CHM>0 && CEMF<0.99) || TMath::Abs(Eta())>2.4
		) && 
		TMath::Abs(Eta())<=2.7
	) return 1;

	else if(
		NHF<0.98 && NEMF>0.01 && NumNeutralParticles>2 && TMath::Abs(Eta())>2.7 && TMath::Abs(Eta())<=3.0 
	) return 1;

	else if (
		NEMF<0.90 && NumNeutralParticles>10 && TMath::Abs(Eta())>3.0
	) return 1;

	return -1;
}

Int_t MyJet::is_passed(){
	// For 2016
	if ( Pt()              < 40  ) return -1;
	if ( TMath::Abs(Eta()) > 4.7 ) return -1;
	if ( is_loose()        < 0   ) return -1;
	return 1;
}

Int_t MyJet::is_b_tagged(){
	//For 2016 : CSVv2 medium
	//https://twiki.cern.ch/twiki/bin/viewauth/CMS/BtagRecommendation80XReReco
	if (bDiscriminator_pfCISVV2 > 0.8484 ) return 1;
	else return -1;
}
void MyJet::print(){

        cout<<"(Pt,Eta,Phi,E) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
        cout<<" NHF: Neutral Hadron Fraction              "<<NHF<<endl;
        cout<<" NEMF    : Neutral EM     Fraction         "<<NEMF<<endl;
        cout<<" CHF     : Charged Hadron Fraction         "<<CHF<<endl;
        cout<<" MUF     : Muon           Fraction         "<<MUF<<endl;
        cout<<" CEMF    : Charged EM     Fraction         "<<CEMF<<endl;
        cout<<" NumConst: Number  Of     Constituents     "<<NumConst<<endl;
        cout<<" CHM     : Charged Multiplicity            "<<CHM<<endl;
        cout<<" NumNeutralParticles:                      "<<NumNeutralParticles<<endl;
	cout<<" bDiscriminator_pfCISVV2                   "<<bDiscriminator_pfCISVV2<<endl;
	cout<<"is_loose()                                 "<<is_loose()<<endl;
	cout<<"is_passed()                                "<<is_passed()<<endl;
	cout<<"is_b_tagged()                              "<<is_b_tagged()<<endl;
	cout<<"JetFlavor                                  "<<jetFlavor<<endl;
	cout<<"Operating Point (OP)                       "<<OP<<endl;
	cout<<"SF, SFLow, SFUp                            "<<SF<<","<<SFLow<<","<<SFUp<<endl;
	cout<<"-------------------------------------------"<<endl;
}

void MyJet::print_all(vector<MyJet> &MyJets){
        cout<<"============== vector of jets ============="<<endl;
        for(auto &p: MyJets){
                p.print();
        }
}


