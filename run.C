#include "pre_run.C"


     
void run(){
	time_t tic, toc;
	tic = time(0);
	SmallClassExtra working;
	Long64_t n_entries = working.fChain->GetEntries();
	working.turn_on_necessary_branches();
	n_entries = 100000;
	CutFlowTable cut_flow_table(n_entries);
	for(Long64_t event =0; event < n_entries; event++){
		print(event+1,n_entries,10000);
		working.GetEntry(event);
		cut_flow_table.fill(CutFlowTable::cut_name::non);
		if( working.genweight_cut() >            0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::genweight);}
		else continue;
		if( working.trigger_cut()              > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::trigger);}
		else continue;
		if(working.vertex_cut()                > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::vertex);}
		else continue;
		if( working.build_cut_photons()        > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::photon);}
		else continue;
		if( working.build_cut_muons()          > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::muon);}
		else continue;
		if( working.build_cut_electrons()      > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::electron);}
		else continue;
		if( working.build_cut_jets()          > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::jet);}
		else continue;
		working.build_selected_jets();
		if( working.build_cut_met()           > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::met);}
		else continue;
		if( working.other_cut()               > 0 ){
			cut_flow_table.fill(CutFlowTable::cut_name::other_cut);}
		else continue;
		working.build_pileUp_SF();
		Double_t scale = working.scale();
		cut_flow_table.fill(CutFlowTable::cut_name::SF, scale);

		//gens (temporary)
		working.build_gens();
		working.match_gens_MySelectedPhotons();
		
	}
	
	working.plot_all();
	cut_flow_table.calculate_write("efficieny.csv");


	toc = time(0);
	print_time(tic,toc);
}
