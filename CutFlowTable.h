#ifndef CUTFLOWTABLE_H_INCLUDED
#define CUTFLOWTABLE_H_INCLUDED

class CutFlowTable{
public:
	int n_entries;
	int n_cuts;
	enum class cut_name{
		trigger = 0
	};
	const vector<string> cut_name_string = {
		"trigger"
	};
	vector<Long64_t> n_selected;
	vector<Double_t> efficiency;

	// constructor
	CutFlowTable(int n):n_entries{n}{
		n_cuts = cut_name_string.size();
		for(int i=0; i<n_cuts; i++){
			n_selected.push_back(0);
			efficiency.push_back(0);
		}
	}

    // methods
	void calculate_efficiency();
	void fill(cut_name name_in_enum);
	void write(const string& file_name_for_write);
	void calculate_write(const string& file_name);

};

#endif