#ifndef MYPHOTON_H_INCLUDED
#define MYPHOTON_H_INCLUDED

#include "TLorentzVector.h"
#include <vector>

class MyPhoton: public TLorentzVector{
private:
	Double_t HoverE = 0;
	
public:
	void set_HoverE(const Double_t &x);
	Double_t get_HoverE();

	void print();
	void print_all(vector<MyPhoton>&);
};

#endif
