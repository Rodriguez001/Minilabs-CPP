#pragma once
#include <iostream>
#include <string.h>
#include <vector>
#include "File.h"
using namespace std;

class Directory {
	private :
		string name;
        vector<File *> files;
	public :
		// the constructor 
		Directory(string name);
        // getter method for name
        string getName() const;  
        // getter method for files
        vector< File *> getFiles() const;
        // getter method for a file
        File* popFile(unsigned int i) const;
        // setter method for files
        void setFiles(vector<File *> files);
        // setter method for file
        Directory* pushFile(File * file);
        //method for average file compression rate
        unsigned int getAvRateCompressedSize();
        // method for average file compression rate according to type
        unsigned int getAvRateCompressedType(string type);
        // setter method for name
        void setName(string nom);
        // the destructor
		~Directory();
		// An overloaded operator<<, allowing us to print a file via cout<<
	friend ostream& operator<<(ostream& os, const Directory & d);	
};
