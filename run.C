#include "pre_run.C"

     
void run(){

	SmallClassExtra working;
	Long64_t n_entries = working.fChain->GetEntries();
	working.turn_on_necessary_branches();
	n_entries = 100000;
	CutFlowTable cut_flow_table(n_entries);
	for(Long64_t event =0; event < n_entries; event++){
		print(event+1,n_entries,10000);
		working.GetEntry(event);
		working.build_all(); // build all objects
		cut_flow_table.fill(CutFlowTable::cut_name::non);
		if( working.genweight_cut() > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::genweight);}
		else continue;
		if(working.vertex_cut()     > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::vertex);}
		else continue;
		if( working.trigger_cut()   > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::trigger);}
		else continue;
		if( working.photon_cut()    > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::photon);}
		else continue;
		if( working.muon_cut()      > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::muon);}
		else continue;
		if( working.electron_cut()      > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::electron);}
		else continue;
	}
	
	cut_flow_table.calculate_write("efficieny.csv");

}
