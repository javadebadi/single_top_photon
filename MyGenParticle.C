#include "MyGenParticle.h"

void MyGenParticle::print(){

        cout<<"(Pt,Eta,Phi,E) = "<<"("<<
                Pt()<<","<<Eta()<<","<<Phi()<<","<<Energy()<<")"<<endl;
	cout<<"Status =                   "<<Status<<endl;
	cout<<"ID     =                   "<<ID<<endl;
	cout<<"Mother_ID =                "<<Mother_ID<<endl;
	cout<<"GrandMother_ID =           "<<GrandMother_ID<<endl;
	cout<<"Name =                     "<<Name<<endl;
	cout<<"is_prompt =                "<<is_prompt()<<endl;
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

bool MyGenParticle::is_mother_quark(){
	if( 	ID == 1 || ID == -1 ||
		ID == 2 || ID == -2 ||
		ID == 3 || ID == -3 ||
		ID == 4 || ID == -4 ||
		ID == 5 || ID == -5 ||
		ID == 6 || ID == -6 ){
		return true;
	}
	else return false;
}
bool MyGenParticle::is_mother_charged_lepton(){
	if(	ID == 11 || ID == -11 ||
		ID == 13 || ID == -13 ||
		ID == 15 || ID == -15 ){
		return true;
	}
	else return false;
}
bool MyGenParticle::is_mother_neutral_lepton(){
	if(	ID == 12 || ID == -12 ||
		ID == 14 || ID == -14 ||
		ID == 16 || ID == -16 ){
		return true;
	}
	else return false;
}
bool MyGenParticle::is_mother_gauge_boson(){
	if(	ID == 21 || ID == -21 ||
		ID == 22 || ID == -22 ||
		ID == 23 || ID == -23 ||
		ID == 24 || ID == -24 ){
		return true;
	}
	else return false;
}
bool MyGenParticle::is_mother_Higgs(){
	if ( ID == 25 || ID == -25 ){
		return true;
	}
	else return false;
}
bool MyGenParticle::is_prompt(){

	if(	ID != 22 || ID != -22) return false;

	if( 	is_mother_quark() || 
		is_mother_charged_lepton() || is_mother_neutral_lepton() || 
		is_mother_gauge_boson()    || is_mother_Higgs()           ){
		return true;
	}
	else return false;
	
}
