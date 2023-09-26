// This example is used to illustrate the deep copy principle 
#pragma once
#include <iostream>
#include <string.h>
#include "File.h"
using namespace std;

class Image : public File{
	private :
		unsigned int width, height;
	public :
		// the constructor 
		Image(string name, string extension, unsigned int size, unsigned int width, unsigned int height);
		// virtual method of compression
        unsigned int getCompressedSize() override ;
        // getter method for width
        unsigned int getWidth() const; 
        // getter method for height
        unsigned int getHeight() const;        
        // setter method for width
        void setWidth(unsigned int width);
        // setter method for height
        void setHeight(unsigned int height);
        // the destructor
		~Image();
        void printMyself(ostream& os) override;
		// An overloaded operator<<, allowing us to print a file via cout<<
	friend ostream& operator<<(ostream& out, const Image & t);	
};
