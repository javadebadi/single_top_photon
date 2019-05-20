#include "CutFlowTable.h"
	void CutFlowTable::calculate_efficiency(){
		for(int i=0; i<n_cuts; i++){
			efficiency.at(i) =      static_cast<double>(n_selected.at(i))
                        	                /
                                	        static_cast<double>(n_entries);
			cout<<"efficiency of cut "<<i<<" : "<<efficiency.at(i)<<endl;
		}

	}

	void CutFlowTable::fill(cut_name name_in_enum){
		
		n_selected.at(int(name_in_enum))++;
	}
	void CutFlowTable::fill(cut_name name_in_enum, Double_t scale){
		n_selected.at(int(name_in_enum)) += scale;
	}

	void CutFlowTable::write(const string& file_name_for_write){
        	ofstream ost{file_name_for_write};
        	if(!ost){
                	cout<<"ERROR: output file "<<file_name_for_write<<endl;
                	return;
        	}
		ost<<"CUT"<<","<<"efficiency"<<","<<"selected"<<","<<"total"<<"\n";
		for(int i=0; i<n_cuts; i++){
			ost<<cut_name_string.at(i)<<",";
			ost<<efficiency.at(i)<<",";
			ost<<n_selected.at(i)<<",";
			ost<<n_entries;
			ost<<"\n";
		}
		ost.close();
		return;
	}

	void CutFlowTable::calculate_write(const string& file_name){
		calculate_efficiency();
		write(file_name);
	}
