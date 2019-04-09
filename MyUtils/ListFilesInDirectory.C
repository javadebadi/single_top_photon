#include "ListFilesInDirectory.h"

void ListFilesInDirectory::set_directory_path(const TString& path){
	directory_path = path;
}
TString ListFilesInDirectory::get_directory_path(){
	return directory_path; 
}
void ListFilesInDirectory::set_ext(const TString& extension){
	ext = extension;
}
TString ListFilesInDirectory::get_ext(){
	return ext;
}
vector<TString> ListFilesInDirectory::get_files_paths(){
	return files_paths;
}

void ListFilesInDirectory::help(){
                cout<<"=====> Members of Class <====="<<endl;
                cout<<"directory_path: path for a directory"<<endl;
                cout<<"ext    :  suffix of the files you want to list"<<endl;
                cout<<"files_paths: list of path for files in directories"<<endl;
                cout<<"directories_paths: list of path for directories"<<endl;
                cout<<"NOTE: files_paths will contain paths for files you want"<<endl;
                cout<<"=====<                  >====="<<endl;


}

void ListFilesInDirectory::list_files(){

	if(files_paths.size() != 0 ){
		Color::Modifier red(Color::FG_BLUE);
       		Color::Modifier def(Color::FG_DEFAULT);
        	cout << red << "Warning:" << def << 
			"The List of files already contains some files from some directories!" << endl;
	}
	cout<<"This is the list of files that are added in the list of the string"<<endl;
	if( directory_path.EndsWith("/") == false ){
		directory_path = directory_path + "/";    // if the path string does not
				// end with "/" character
				// then adds "/" to end of the path
	}

	TSystemDirectory dir(directory_path, directory_path);
	TList *files = dir.GetListOfFiles();
	if(files){
		TSystemFile *file;
		TString fname;
		TIter next(files);
		while ((file=(TSystemFile*)next())){
			fname = file->GetName();
			if (!file->IsDirectory() && fname.EndsWith(ext)) {
				files_paths.push_back(directory_path+fname);
				cout<< fname.Data() << endl;
			}
		}
	}
}

void ListFilesInDirectory::clear(){
	files_paths.clear();
        Color::Modifier red(Color::BG_RED);
        Color::Modifier def(Color::BG_DEFAULT);
	cout<<red<<"<< ===== files_paths is cleared ====== >>"<<def<<endl; 
}

void ListFilesInDirectory::clear_all(){
        files_paths.clear();
	directories_paths.clear();
        Color::Modifier red(Color::BG_RED);
        Color::Modifier def(Color::BG_DEFAULT);
        cout<<red<<"<< ===== files_paths and directories_paths are cleared ====== >>"<<def<<endl;
}


void ListFilesInDirectory::add_to_directories_paths(const TString& path){
	directories_paths.push_back(path);
}

void ListFilesInDirectory::add_to_directories_paths(const vector<TString>& paths){
	for(auto path: paths){
		directories_paths.push_back(path);
	}
}

void ListFilesInDirectory::list_files_for_directories_paths(const TString& extension=".root"){
		(*this).set_ext(extension);
		for(TString p: directories_paths){
			(*this).set_directory_path(p);
			cout<<p<<endl;
			cout<<ext<<endl;
			(*this).list_files();	
		}
}

Int_t ListFilesInDirectory::size(){
	return files_paths.size();
}

void ListFilesInDirectory::print(){

	Color::Modifier blue(Color::BG_BLUE);
	Color::Modifier def(Color::BG_DEFAULT);

	cout<<blue<<"======= List of Paths ========"<<endl;
	Int_t counter=1;
	for(TString s: files_paths){
		cout<<counter<<" - ";
		cout<<s<<endl;
		counter++;
	}
	cout<<"==== End of List of Paths ===="<<def<<endl;
}

void ListFilesInDirectory::make_class_for_directories_paths(const TString& tree_name,
							const TString& class_name){
		(*this).clear();
		(*this).list_files_for_directories_paths(".root");
		TChain fChain(tree_name);
		for(auto p: files_paths){
			fChain.Add(p);
		}
		fChain.MakeClass(class_name);
		return;
			
}

