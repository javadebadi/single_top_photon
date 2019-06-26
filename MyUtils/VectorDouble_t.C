#include "VectorDouble_t.h"

VectorDouble_t::VectorDouble_t(const TString& name){
	header_name = name;
	branch_name = name;
	root_file_name = name + ".root";
	csv_file_name = name + ".csv";
}

void VectorDouble_t::info(){
	cout<<"=============== Info ================"<<endl;
	cout<<"| # elements =                       "<<size()<<endl;
	cout<<"|------------------------------------"<<endl;
	cout<<"| header =                           "<<header<<endl;
        cout<<"|------------------------------------"<<endl;
	cout<<"| header_name =                      "<<header_name<<endl;
        cout<<"|------------------------------------"<<endl;
        cout<<"| tree_name =                        "<<tree_name<<endl;
        cout<<"|------------------------------------"<<endl;
        cout<<"| branch_name =                      "<<branch_name<<endl;
        cout<<"|------------------------------------"<<endl;
        cout<<"| root_file_name =                   "<<root_file_name<<endl;
        cout<<"|------------------------------------"<<endl;
        cout<<"| csv_file_name =                    "<<csv_file_name<<endl;
        cout<<"|------------------------------------"<<endl;
        cout<<"| delimator =                        "<<delimator<<endl;
        cout<<"|------------------------------------"<<endl;
        cout<<"| var_notation =                     "<<var_notation<<endl;
        cout<<"|------------------------------------"<<endl;
        cout<<"| min =                              "<<min()<<endl;
        cout<<"|------------------------------------"<<endl;
        cout<<"| max =                              "<<max()<<endl;
        cout<<"|------------------------------------"<<endl;
	cout<<"| sum =                              "<<sum()<<endl;
	cout<<"|------------------------------------"<<endl;
	cout<<"| mean =                             "<<mean()<<endl;
	cout<<"|------------------------------------"<<endl;



}

Double_t VectorDouble_t::min(){
	if( size() == 0 ) cout<<"No element. Garbage: ";
	return *std::min_element(begin(),end());
}
Double_t VectorDouble_t::max(){
	if( size() == 0 ) cout<<"No element. Garbage: ";
	return *std::max_element(begin(),end());
}
Double_t VectorDouble_t::sum(){
	if( size() == 0 ) cout<<"No elemnts. Garbage: ";
	return std::accumulate(begin(),end(),0.0);
}
Double_t VectorDouble_t::mean(){
	if(size() == 0 ){
		cout<<"nan"<<endl;
		return 0;
	}
	else{
		return accumulate(begin(),end(),0.0)/size();
	}

}
void VectorDouble_t::add(const VectorDouble_t &v1){
	for(auto v: v1){
		this->push_back(v);
	}
}
void VectorDouble_t::write_to_csv(){

                ofstream csv_file;
                csv_file.open(csv_file_name);
                if ( header == true){
                        csv_file<<header_name<<delimator<<"\n";
                }
                for(Long64_t i=0; i<size(); i++){
                        csv_file<<at(i)<<delimator<<"\n";
                }

                csv_file.close();

}

void VectorDouble_t::write_to_root(){

	// define TFile
	TFile * new_file = new TFile(root_file_name,"recreate");
	// define TTree
	TTree * tree = new TTree(tree_name,"Analysis");
	// define TBranch
	Double_t var;
	TBranch* branch = tree->Branch(branch_name, &var, "var/"+var_notation);
	for(Long64_t i =0; i<size(); i++){
		var = at(i);
		tree->Fill();
	}

	tree->Write("",TObject::kOverwrite);
	new_file->Close();

}

void VectorDouble_t::write_to_root(const TString& root_name){

	// define TFile
	TFile * new_file = new TFile(root_name,"recreate");
	// define TTree
	TTree * tree = new TTree(tree_name,"Analysis");
	// define TBranch
	Double_t var;
	TBranch* branch = tree->Branch(branch_name, &var, "var/"+var_notation);
	for(Long64_t i =0; i<size(); i++){
		var = at(i);
		tree->Fill();
	}

	tree->Write("",TObject::kOverwrite);
	new_file->Close();

}


void VectorDouble_t::write_to_root(const TString& root_name, const TString& tree_name){

	// define TFile
	TFile * new_file = new TFile(root_name,"recreate");
	// define TTree
	TTree * tree = new TTree(tree_name,"Analysis");
	// define TBranch
	Double_t var;
	TBranch* branch = tree->Branch(branch_name, &var, "var/"+var_notation);
	for(Long64_t i =0; i<size(); i++){
		var = at(i);
		tree->Fill();
	}

	tree->Write("",TObject::kOverwrite);
	new_file->Close();

}
void VectorDouble_t::read_from_root(){

	// define a chain
	TChain * tree = new TChain(tree_name, "");
	tree->Add(root_file_name + "/" + tree_name);

	// define branch
	Double_t var;
	tree->SetBranchAddress(branch_name, &var);

	// print number of entries in root file
	Long64_t n_entries = tree->GetEntries();
	TString info = "n entries of ";
	info = info + root_file_name+"/"+tree_name+"/"+branch_name;
 	info = info + " = ";
	cout<<info<<n_entries<<endl;

	// fill vector with entries of the branch
	for(Long64_t i=0; i<n_entries; i++){
		tree->GetEntry(i);
		push_back(var);
	}
	
}

void VectorDouble_t::read_from_root(const TString & root_file_name){

	// define a chain
	TChain * tree = new TChain(tree_name, "");
	tree->Add(root_file_name + "/" + tree_name);

	// define branch
	Double_t var;
	tree->SetBranchAddress(branch_name, &var);

	// print number of entries in root file
	Long64_t n_entries = tree->GetEntries();
	TString info = "n entries of ";
	info = info + root_file_name+"/"+tree_name+"/"+branch_name;
 	info = info + " = ";
	cout<<info<<n_entries<<endl;

	// fill vector with entries of the branch
	for(Long64_t i=0; i<n_entries; i++){
		tree->GetEntry(i);
		push_back(var);
	}
	
}


void VectorDouble_t::read_from_root(const TString & root_file_name, const TString& tree_name){

	// define a chain
	TChain * tree = new TChain(tree_name, "");
	tree->Add(root_file_name + "/" + tree_name);

	// define branch
	Double_t var;
	tree->SetBranchAddress(branch_name, &var);

	// print number of entries in root file
	Long64_t n_entries = tree->GetEntries();
	TString info = "n entries of ";
	info = info + root_file_name+"/"+tree_name+"/"+branch_name;
 	info = info + " = ";
	cout<<info<<n_entries<<endl;

	// fill vector with entries of the branch
	for(Long64_t i=0; i<n_entries; i++){
		tree->GetEntry(i);
		push_back(var);
	}
	
}
void VectorDouble_t::read_from_csv(){
	FILE * fp = fopen(csv_file_name,"r");
	char line[1001];
	Int_t nlines = 0;
	double var = 0;

	if( header == true){
		char  h;
		fgets(line,1000,fp);
		TString format = "%s" + delimator;
		sscanf(line,format,&h);
	}
	while(fgets(line,1000,fp)){
		TString format= "%lg" + delimator;
		sscanf(line,format,&var);
		push_back(var);	
	}

	fclose (fp);

}

TH1D* VectorDouble_t::fill_histogram(const Int_t& n_bins = 50){

	TH1D * h = new TH1D(	branch_name,
				branch_name,
				n_bins,
				min(),
				max()
			);

	for(Long64_t i=0; i<size(); i++){
		h->Fill(at(i));
	}

	return h;
}
