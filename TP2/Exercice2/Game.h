#pragma once
#include <iostream>
#include "Tower.h"

class Game{
    private:
        int dimension ;
        Tower * towers;		
	public :
		// Constructeur de la classe Game
		Game(int dimension);
		// This copy constructor should implement a deep copy from the read-only reference "other" 
		
        int get_number_of_towers() const;
        // this method should give the tower number with the index i
        Tower get_tower(int i) const;
        // this method should set the tower number with the index i
        void set_tower(const int i, const Tower& tower);
        // the method should allow to move disks through the towers
        void deplacer(Tower& origine, Tower& destination);
        
        // solve the game
        void solve(int n, Tower & origine, Tower& Intermediaire, Tower & destination);
        
        // Assignment operator
        Game& operator=(const Game& other);
        ;
		// This destrutor should de-allocate the heap memory properly
		~ Game();
		// An overloaded operator<<, allowing us to print a pair via cout<<
	friend std::ostream& operator<<(std::ostream& out, const Game & g);
};
