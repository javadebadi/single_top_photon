#include "MyGenParticle.h"

void MyGenParticle::print(){

        cout<<"(Pt,Eta,Phi,E) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"Status =                   "<<Status<<endl;
	cout<<"ID     =                   "<<ID<<endl;
	cout<<"Mother_ID =                "<<Mother_ID<<endl;
	cout<<"GrandMother_ID =           "<<GrandMother_ID<<endl;
	cout<<"Name =                     "<<Name<<endl;
        cout<<"----------------------------------------------"<<endl;
}

void MyGenParticle::print_all(vector<MyGenParticle> &MyGenParticle){
        cout<<"============== vector of MyGenParticle ============="<<endl;
        for(auto &p: MyGenParticle){
                p.print();
        }
}

bool MyGenParticle::is_matched(TLorentzVector & p){
	Double_t deltaR = (*this).DeltaR(p);
	Double_t deltaPtOverPt = TMath::Abs( (*this).Pt() - p.Pt() )/p.Pt();
	if ( deltaR < Matching_deltaR && deltaPtOverPt < Matching_deltaPtOverPt) return true;
	else return false; 
}

Double_t MyGenParticle::chi(TLorentzVector & p){
	Double_t deltaR = (*this).DeltaR(p);
	Double_t deltaPtOverPt = TMath::Abs( (*this).Pt() - p.Pt() )/p.Pt();
	return TMath::Sqrt( deltaR*deltaR + deltaPtOverPt*deltaPtOverPt  );
}
