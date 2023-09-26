#pragma once
#include <iostream>

class Disk{
	private :
		int diameter;		
	public :
         // default constructor
         Disk();
		// This constructor should set up pa and pb to point to newly allocated memory locations on the heap 
		// and whose values will be a and b, respectively.
		Disk(int d);
		// This copy constructor should implement a deep copy from the read-only reference "other" 
		Disk(const Disk& other);
        // get the value of the diameter
        int getDiameter() const;
        //set the value of the diameter
        void setDiameter(int d);
        // This destrutor should de-allocate the heap memory properly
		~Disk();
		// An overloaded operator<<, allowing us to print a pair via cout<<
	friend std::ostream& operator<<(std::ostream& out, const Disk & d);
};
