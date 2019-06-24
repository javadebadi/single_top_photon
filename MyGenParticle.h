#ifndef MYGENPARTICLE_H_INCLUDED
#define MYGENPARTICLE_H_INCLUDED

class MyGenParticle: public TLorentzVector{
private:
	Double_t Status = 0;
	Int_t    ID = 0;
	TString  Name = "";
	Int_t    Mother_ID = 0;
	Int_t    GrandMother_ID = 0;
	Double_t Matching_deltaR = 0.3;
	Double_t Matching_deltaPtOverPt = 1.0;
public:
	void set_Status(const Double_t &x){Status = x;}
	Double_t get_Status(){return Status;}
	void set_ID(const Int_t &x){ID = x;}
	Int_t get_ID(){return ID;}
	void set_Name(const TString &x){Name = x;}
	TString get_Name(){return Name;}
	void set_Mother_ID(const Int_t &x){Mother_ID = x;}
	Int_t get_Mother_ID(){return Mother_ID;}
	void set_GrandMother_ID(const Int_t &x){GrandMother_ID = x;}
	Int_t get_GrandMother_ID(){return GrandMother_ID;}

	void print();
	void print_all(vector<MyGenParticle>&);
	bool is_matched(TLorentzVector&);
	Double_t chi(TLorentzVector&);
};

#endif
