#ifndef CUTFLOWTABLE_H_INCLUDED
#define CUTFLOWTABLE_H_INCLUDED

class CutFlowTable{
public:
	int n_entries;
	int n_cuts;
	enum class cut_name{
		non       = 0,
		genweight = 1,
		trigger   = 2,
		vertex    = 3,
		photon    = 4,
		muon      = 5,
		electron  = 6,
		jet       = 7,
		met       = 8,
		other_cut = 9,
		SF        = 10
	};
	const vector<string> cut_name_string = {
		"non",
		"genweight",
		"trigger",
		"vertex",
		"photon",
		"muon",
		"electron",
		"jet",
		"met",
		"other_cut",
		"SF"
	};
	vector<Double_t> n_selected;
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
	void fill(cut_name name_in_enum, Double_t scale);
	void write(const string& file_name_for_write);
	void calculate_write(const string& file_name);

};

#endif
