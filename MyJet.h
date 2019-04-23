#ifndef MYJET_H_INCLUDED
#define MYJET_H_INCLUDED

class MyJet: public TLorentzVector{
private:

public:
	void print();
	void print_all(vector<MyJet> &);
};

#endif
