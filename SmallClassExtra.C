#include "SmallClassExtra.h"

// Turn on only branches which are needed in the analysis
void SmallClassExtra::turn_on_necessary_branches(){
	fChain->SetBranchStatus("*",0);
	// trigger branches
	fChain->SetBranchStatus("HLT_IsoTkMu24",1);
	fChain->SetBranchStatus("HLT_IsoMu24"  ,1);
}

//cuts
//Trigger cut
Int_t SmallClassExtra::trigger_cut(){
	if( HLT_IsoTkMu24 > 0 || HLT_IsoMu24> 0) return 1;
	else return -1;
}
