#include "./MyUtils/ListFilesInDirectory.h"
#include "./MyUtils/ListFilesInDirectory.C"

void MakeClass(){

	vector<TString> directories_paths{"/cmsdata1/jebadi/DATA/TGJets_TuneCUETP8M1_13TeV_amcatnlo_madspin_pythia8_Summer16_tqaReducedss"};
	TString tree_name = "TNT";
	TString class_name = "SmallClass";


	ListFilesInDirectory lsf;
	lsf.clear_all();
	lsf.add_to_directories_paths(directories_paths);
	lsf.make_class_for_directories_paths(tree_name, class_name);

	cout<<"======================================"<<endl;
	cout<<"========== MakeClass DONE! ==========="<<endl;
	cout<<"======================================"<<endl;
}
