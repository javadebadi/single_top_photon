#include "pre_run.C"
#include <vector>
using namespace std;
//#include "SmallClass.h"
void turn_on_necessary_branches(SmallClass* w){
        w->fChain->SetBranchStatus("*",0);
	w->fChain->SetBranchStatus("genweight",1);
	w->fChain->SetBranchStatus("HLT_IsoMu24",1);
	w->fChain->SetBranchStatus("HLT_IsoTkMu24",1);
	w->fChain->SetBranchStatus("Muon_pt",1);
	w->fChain->SetBranchStatus("Photon_pt",1);
	w->fChain->SetBranchStatus("Jet_pt",1);
	w->fChain->SetBranchStatus("Met_type1PF_pt",1);
}
     
void run_generate_indices(){
	time_t tic, toc;

	bool no_cut = false;
	tic = time(0);
	SmallClass * working = new SmallClass();

	Long64_t n_entries = working->fChain->GetEntries();
	turn_on_necessary_branches(working);
	//n_entries = 100000;
	VectorDouble_t indices;
	indices.set_header(false);
	for(Long64_t event =0; event < n_entries; event++){
		print(event+1,n_entries,10000);
		if ( no_cut == true){
			indices.push_back(event);
			continue;
		}// if no cut assumed should return all events indices in indices.csv file

		working->GetEntry(event);
		if( working->genweight < 0  ) continue;
		if( working->HLT_IsoMu24 < 0 ) continue;
		if( working->HLT_IsoTkMu24 < 0) continue;
		if( working->Muon_pt->size() < 1 ) continue;
		if(*max_element(working->Muon_pt->begin(), working->Muon_pt->end() ) < 24) continue;
		if( working->Photon_pt->size() < 1) continue;
		if(*max_element(working->Photon_pt->begin(), working->Photon_pt->end() ) < 25) continue;
		if( working->Jet_pt->size() < 2) continue;
		if(*max_element(working->Jet_pt->begin(), working->Jet_pt->end() ) < 40) continue;
		if( working->Met_type1PF_pt < 30 ) continue;
		
		indices.push_back(event);
		
	}
	indices.write_to_csv("indices.csv");	
	toc = time(0);
	print_time(tic,toc);
}
