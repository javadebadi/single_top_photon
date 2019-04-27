#include "VectorVectorDouble_t.h"
VectorDouble_t VectorVectorDouble_t::flatten(){
	flattened.clear();
	for(auto v: (*this) ){
		for(auto w: v){
			flattened.push_back(w);
		}
	}
	return flattened;
}
void VectorVectorDouble_t::write_to_root(const TString& s){
	cout<<" = ====  s "<<s<<endl;
	flatten();
	flattened.set_root_file_name(s+".root");
	flattened.set_branch_name(s);
	flattened.write_to_root();
}
