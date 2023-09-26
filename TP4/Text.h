// This example is used to illustrate the deep copy principle 
#pragma once
#include <iostream>
#include <string.h>
#include "File.h"
using namespace std;

enum Encoding {ASCII, Unicode};

class Text : public File{
	private :
		Encoding encoding;
	public :
		// the constructor 
		Text(string name, string extension, unsigned int size, Encoding encode);
		// virtual method of compression
        unsigned int getCompressedSize() override ;
        // getter method for encoding 
        Encoding getEncoding() const;        
        // setter method for encoding 
        void setEncoding(Encoding code) ;
        // the destructor
		~Text();
		void printMyself(ostream& os) override;
		// An overloaded operator<<, allowing us to print a file via cout<<
	friend ostream& operator<<(ostream& out, const Text & t);	
};
