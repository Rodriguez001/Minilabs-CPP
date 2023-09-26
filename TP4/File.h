// This example is used to illustrate the deep copy principle 
#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class File{
	private :
		string name;
		string extension;
		unsigned int size;
	public :
		// the constructor 
		File(string name, string extension, unsigned int size);
		// virtual method of compression
        virtual unsigned int getCompressedSize();
        // getter method for name
        string getName() const;
        // getter method for extension
        string getExtension() const;
        // getter method for size
        unsigned int getSize() const;
        // setter method for name
        void setName(string nom) ;
        // setter method for extension
        void setExtension(string ext) ;
        // setter method for size
        void setSize(unsigned int taille) ;
        // the destructor
		virtual ~File();
		// An overloaded operator<<, allowing us to print a file via cout<<
	    friend ostream& operator<<(ostream& out, File & f);
        virtual void printMyself(ostream& os);
};
