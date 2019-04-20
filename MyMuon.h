#ifndef MYMUON_H_INCLUDED
#define MYMUON_H_INCLUDED

#include "TLorentzVector.h"
#include "Standards.h"
#include <vector>


class MyMuon: public TLorentzVector{
private:
	bool tight  = 0;
	bool isGlobal = 0;
public:
	void set_tight(const bool &x){tight = x;}
	bool get_tight(){return tight;}
	void set_isGlobal(const bool &x){isGlobal = x;}
	bool get_isGlobal(){return isGlobal;}

	void build();
	Int_t is_tight();
	Int_t is_passed();
	void print();
	void print_all(vector<MyMuon>&);
	
};

#endif
