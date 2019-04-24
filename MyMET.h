#ifndef MYMET_H_INCLUDED
#define MYMET_H_INCLUDED

class MyMET: public TVector3{
public:
	Int_t is_passed();
	void print();
};

#endif
