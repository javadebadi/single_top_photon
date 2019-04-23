#include "MyJet.h"

void MyJet::print(){

        cout<<"(Pt,Eta,Phi,E) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"------------------------------------------------"<<endl;
}

void MyJet::print_all(vector<MyJet> &MyJets){
        cout<<"============== vector of jets ============="<<endl;
        for(auto &p: MyJets){
                p.print();
        }
}


