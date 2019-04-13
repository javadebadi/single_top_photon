#ifndef MYPHOTON_H_INCLUDED
#define MYPHOTON_H_INCLUDED

#include "TLorentzVector.h"
#include <vector>

class MyPhoton: public TLorentzVector{
public:
	void print();
	void print_all(vector<MyPhoton>&);
};

#endif
