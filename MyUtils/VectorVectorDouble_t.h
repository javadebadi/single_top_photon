#ifndef VECTORVECTORDOUBLE_T_H_INCLUDED
#define VECTORVECTORDOUBLE_T_H_INCLUDED
#include "VectorDouble_t.h"
class VectorVectorDouble_t: public vector<VectorDouble_t>{
public:
	VectorDouble_t flattened;

	VectorDouble_t flatten();
	void write_to_root(const TString&);	
};
#endif
