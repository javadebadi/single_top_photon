#ifndef MYPHOTON_H_INCLUDED
#define MYPHOTON_H_INCLUDED

#include "TLorentzVector.h"
#include <vector>

class MyPhoton: public TLorentzVector{
private:
	Double_t HoverE = 0;
	Double_t SigmaIEtaIEta = 0;
	
public:
	void set_HoverE(const Double_t &x){HoverE = x;}
	Double_t get_HoverE(){return HoverE;}
	void set_SigmaIEtaIEta(const Double_t &x){SigmaIEtaIEta = x; }
	Double_t get_SigmaIEtaIEta(){return SigmaIEtaIEta;}

	void print();
	void print_all(vector<MyPhoton>&);
};

#endif
