#ifndef VectorDouble_t_H_
#define VectorDouble_t_H_

#include <vector>

class VectorDouble_t: public vector<Double_t>{
private:
	bool header{true};
	TString header_name{"NULL"};
	TString tree_name{"tree"};
	TString branch_name{"NULL"};
	TString root_file_name{"NULL.root"};
	TString csv_file_name{"NULL.csv"};
	TString delimator{","};
	const TString var_notation{"D"};
public:
	// constructors
	VectorDouble_t(){};	// default constructor
	VectorDouble_t(const TString& name);     // a constructor
	// set and get methods
	bool get_header(){return header;}
	void set_header(const bool& b){header = b; }
	TString get_header_name(){return header_name;}
	void set_header_name(const TString& name){header_name = name;}
	TString get_tree_name(){return tree_name;}
	void set_tree_name(const TString& t){tree_name = t;}
	TString get_branch_name(){return branch_name;}
	void set_branch_name(const TString& b){branch_name = b;}
	TString get_root_file_name(){return root_file_name;}
	void set_root_file_name(const TString& r){root_file_name = r;}
	TString get_csv_file_name(){return csv_file_name;}
	void set_csv_file_name(const TString& c){csv_file_name = c;}
	TString get_delimator(){return delimator;}
	void set_delimator(const TString& d){delimator = d;}

	

	// other methods
	void info();
	Double_t min();
	Double_t max();
	Double_t sum();
	Double_t mean();
	void add(const VectorDouble_t &);
	void write_to_csv();
	void write_to_root();
	void read_from_root();
	void read_from_csv();
	TH1D* fill_histogram(const Int_t& n_bins);
};

#endif
