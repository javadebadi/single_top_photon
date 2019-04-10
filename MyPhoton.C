#include "MyPhoton.h"

void MyPhoton::print(){
	cout<<"=========== photon ==========="<<endl;
	cout<<"(Pt,Eta,Phi,E) = "<<"("<<
		Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"=============================="<<endl;
}
