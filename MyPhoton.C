#include "MyPhoton.h"

void MyPhoton::print(){
	cout<<"(Pt,Eta,Phi,E) = "<<"("<<
		Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"----------------------------------------------"<<endl;
}

void MyPhoton::print_all(vector<MyPhoton> &MyPhotons){
	cout<<"============== vector of photons ============="<<endl;
	for(auto &p: MyPhotons){
		p.print();
	}
}
