#include "MyPhoton.h"

void MyPhoton::set_HoverE(const Double_t &x){
		HoverE = x;
}

Double_t MyPhoton::get_HoverE(){
		return HoverE;
}

void MyPhoton::print(){
	cout<<"(Pt,Eta,Phi,E) = "<<"("<<
		Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"HoverE = "<<HoverE<<endl;
	cout<<"----------------------------------------------"<<endl;
}

void MyPhoton::print_all(vector<MyPhoton> &MyPhotons){
	cout<<"============== vector of photons ============="<<endl;
	for(auto &p: MyPhotons){
		p.print();
	}
}
