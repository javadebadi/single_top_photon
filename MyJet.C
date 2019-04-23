#include "MyJet.h"

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
	cout<<"-------------------------------------------"<<endl;
}

void MyJet::print_all(vector<MyJet> &MyJets){
        cout<<"============== vector of jets ============="<<endl;
        for(auto &p: MyJets){
                p.print();
        }
}


