#ifndef MYJET_H_INCLUDED
#define MYJET_H_INCLUDED

class MyJet: public TLorentzVector{
private:
	Double_t NHF      = 0; // Neutral Hadron Fraction
	Double_t NEMF     = 0; // Neutral EM     Fraction
	Double_t CHF      = 0; // Charged Hadron Fraction
	Double_t MUF      = 0; // Muon           Fraction
	Double_t CEMF     = 0; // Charged EM     Fraction
	Int_t    NumConst = 0; // Number  Of     Constituents
	Int_t    CHM      = 0; // Charged Multiplicity
	Int_t    NumNeutralParticles = 0; // Number Of Neutral Particles
	
public:

	void set_NHF(const Double_t &x){NHF = x;}
	Double_t get_NHF(){return NHF;}
	void set_NEMF(const Double_t &x){NEMF = x;}
	Double_t get_NEMF(){return NEMF;}
	void set_CHF(const Double_t &x){CHF = x;}
	Double_t get_CHF(){return CHF;}
	void set_MUF(const Double_t &x){MUF = x;}
	Double_t get_MUF(){return MUF;}
	void set_CEMF(const Double_t &x){CEMF = x;}
	Double_t get_CEMF(){return CEMF;}
	void set_NumConst(const Int_t &x){NumConst = x;}
	Int_t get_NumConst(){return NumConst;}
	void set_CHM(const Int_t &x){CHM = x;}
	Int_t get_CHM(){return CHM;}
	void set_NumNeutralParticles(const Int_t &x){NumNeutralParticles = x;}
	Int_t get_NumNeutralParticles(){return NumNeutralParticles;}


	void print();
	void print_all(vector<MyJet> &);
};

#endif
