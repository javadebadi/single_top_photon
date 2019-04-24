#include "MyMET.h"

Int_t MyMET::is_passed(){
	if ( Pt () < 30 ) return -1;
	else return 1;
}

void MyMET::print(){

        cout<<"(Pt,Eta,Phi) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<")"<<endl;
	cout<<"--------------------------------------"<<endl;

}

