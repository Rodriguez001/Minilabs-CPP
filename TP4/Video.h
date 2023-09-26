#pragma once
#include <iostream>
#include <string.h>
#include "File.h"
using namespace std;

class Video : public File{
	private :
		unsigned int duration;
	public :
		// the constructor 
		Video(string name, string extension, unsigned int size, unsigned int duration);
		// virtual method of compression
        unsigned int getCompressedSize() override ;
        // getter method for duration
        unsigned int getDuration() const;       
        // setter method for duration
        void setDuration(unsigned int duree);
        // the destructor
		~Video();
		void printMyself(ostream& os) override;
		// An overloaded operator<<, allowing us to print a file via cout<<
	friend ostream& operator<<(ostream& os, const Video & t);	
};
