#ifndef ListFilesInDirectory_H_
#define ListFilesInDirectory_H_

#include <vector>
#include <string>
#include "colormod.h"

class ListFilesInDirectory{
private:
        TString directory_path="./";           		// current path of a directory
        TString ext=".root";            	// suffix of the files
        vector<TString> files_paths = {};	//list of files in (paths to files)
        vector<TString> directories_paths = {};        // list of pathes to directories

public:
	// Constructors
        ListFilesInDirectory(): directory_path("./"), ext(".root"){};
        ListFilesInDirectory(const TString& dir, const TString& ext):directory_path(dir), ext(ext){};

	// set and get methods
	void set_directory_path(const TString& path);
	TString get_directory_path();
	void set_ext(const TString& extension);
	TString get_ext();
        vector<TString> get_files_paths();

	// other methods
	void help();		// help
        void list_files();	// list files in a directory_path which ends with ext
	void clear();		// clears the files_paths vector
	void clear_all();	// clear the files_paths and path_list()
	void add_to_directories_paths(const TString& path);	// add paths to directory to directories_paths
	void add_to_directories_paths(const vector<TString>& paths);	// add paths directories to directories_paths
	void list_files_for_directories_paths(const TString& extension=".root");	//list all files with same extension (ext) in paths in the directories_paths
	Int_t size();		// return size of files_paths
	void print();		// prints content of files_paths in the screen
	void make_class_for_directories_paths(const TString& tree_name, const TString& class_name);	// implement root's MakeClass for this class
};

#endif
