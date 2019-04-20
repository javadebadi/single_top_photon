#include "MyMuon.h"

void MyMuon::build(){

}


Int_t MyMuon::is_tight(){
	if ( tight == true ) return 1;
	else return -1;
}

Int_t MyMuon::is_passed(){

	if ( Pt() < 26                ) return -1;
	if ( TMath::Abs(Eta()) > 2.4  ) return -1;
	if ( is_tight() < 0           ) return -1;
	if ( isGlobal == false        ) return -1;
	return 1;
}

void MyMuon::print(){

        cout<<"(Pt,Eta,Phi,E) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"is_tight()         = "<<is_tight()<<endl;
	cout<<"isGlobal           = "<<isGlobal<<endl;
	cout<<"is_passed()        = "<<is_passed()<<endl;
	cout<<"----------------------------------------------"<<endl;
}

void MyMuon::print_all(vector<MyMuon> &MyMuons){
	cout<<"============== vector of muons ============="<<endl;
	for(auto &m: MyMuons){
		m.print();
	}
}
