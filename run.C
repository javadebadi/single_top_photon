#include "SmallClass.h"
#include "SmallClass.C"

void run(){

	SmallClass working;
	Long64_t n_entries = working.fChain->GetEntries();
	cout<<"# entries = "<<n_entries<<endl;
}
