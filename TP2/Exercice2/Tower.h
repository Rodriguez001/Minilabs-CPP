#pragma once
#include <iostream>
#include "Disk.h"
using namespace std;

class Tower{
	private :
		string name ;
        int nb_disks ;
        int Max_disk ;
        Disk * disks ;
    public :		
	public :
        // default constructor
        Tower();
		// This constructor should set up pa and pb to point to newly allocated memory locations on the heap 
		// and whose values will be a and b, respectively.        
		Tower(string nom, int n);
		// This copy constructor should implement a deep copy from the read-only reference "other" 
		Tower(const Tower& other);
		// get the name of the tower
        string getName() const;
        // set the name of the tower
        void setName(string nom);
        // get the number of disks        
        int getNb_Disks() const;
        // set the disks
        void setNb_Disks(int n );
        // get the disks
        Disk getDisks(int i) const;
        // set the disks
        void setDisks(int i, Disk& disks);
        // empiler un disque
        void pushDisk( Disk& disk );
        // depiler un disque
        Disk popDisk();
        // This destrutor should de-allocate the heap memory properly
		~Tower();
		// An overloaded operator<<, allowing us to print a pair via cout<<
	friend std::ostream& operator<<(std::ostream& out, const Tower & t);
};
