#include "SmallClassExtra.h"
#include "SmallClass.C"
#include "SmallClassExtra.C"
#include <string>
void print(int n, int N, int d=10000){

	static const string col1 = "\033[1;36;40m";
	static const string col2  = "\033[1;32;40m";
	static const string coldef  = "\033[0;0;0m";  
	if (n%d ==0 || n==N){
		cout<<col1<<n<<" of "<<N<<col2<<flush
			<<"      "<<(100*(n))/N<<"%"<<coldef
			<<flush<<"\r";
	}


}

constexpr int n_cuts = 1;

const vector<string> cut_name_string{"trigger"};

enum class cut_name{
	trigger = 0
};

void find_efficiency(	vector<Double_t> &efficiency,
			const vector<Long64_t> &n_selected,
			const Long64_t &n_entries){

        for(int i =0; i < n_selected.size(); i++){

                efficiency.at(i) =      static_cast<double>(n_selected.at(i))
                                        /
                                        static_cast<double>(n_entries);
                cout<<"efficiency of cut "<<i<<" : "<<efficiency.at(i)<<endl;
	}
};

void write_efficiency_to_file(const string& file_name_for_write,
                                const vector<Double_t> &efficiency){
        ofstream ost{file_name_for_write};
        if(!ost){
                cout<<"ERROR: output file "<<file_name_for_write<<endl;
                return;
        }
	for(int i=0; i<n_cuts; i++){
		ost<<cut_name_string.at(i)<<",";
		ost<<efficiency.at(i);
		ost<<"\n";
	}
        ost.close();
        return;
}


void run(){


	SmallClassExtra working;
	Long64_t n_entries = working.fChain->GetEntries();
	working.turn_on_necessary_branches();
	n_entries = 100000;
	vector<Long64_t> n_selected(n_cuts);
	vector<Double_t> efficiency(n_cuts);
	for(Long64_t event =0; event < n_entries; event++){
		print(event+1,n_entries,10000);
		working.GetEntry(event);
		if( working.trigger_cut() < 0) continue;
		n_selected.at(int(cut_name::trigger))++;
	}

	/*for(int i =0; i < n_selected.size(); i++){
		efficiency.at(i) = 	static_cast<double>(n_selected.at(i))
					/
					static_cast<double>(n_entries);
		cout<<"efficiency of cut "<<i<<" : "<<efficiency.at(i)<<endl;
	}*/
	find_efficiency(efficiency, n_selected, n_entries);
	write_efficiency_to_file("efficieny.txt",efficiency);

}
