#include "Game.h"
#include "Tower.h"
#include <iostream>
using namespace std;

Game :: Game (int dim) : dimension {dim}, towers {new Tower[3]} {
}

Tower Game :: get_tower(int i) const {
    return towers[i];
}

void Game :: set_tower (const int i, const Tower& tower) {
    towers[i] = tower;
}

void Game :: deplacer (Tower& origine, Tower& destination){
    Disk temp = origine.popDisk();
    
    if(temp.getDiameter() > 0){
        Disk temp2 = destination.popDisk();
       
        if((temp2.getDiameter() > 0) && (temp2.getDiameter() < temp.getDiameter())){
            cerr << "Erreur : on ne peut pas deplacer un disque de taille "
                 << temp.getDiameter() << " sur un disque de taille " << temp2.getDiameter() 
                 <<" !"<< endl;
            return;
        }
        // on deplace 
       
        destination.pushDisk(temp);
        temp2.setDiameter(0);
        origine.pushDisk(temp2);
        
    }
}

void Game :: solve (int n, Tower& origine, Tower& inter, Tower& arrivee){
    if(n == 0){ 
        cout << *this << endl;     
        
    }else{
        solve (n-1, origine, arrivee, inter);
        //solve (1, origine, inter, arrivee);
        deplacer (origine, arrivee);
        deplacer (inter, arrivee);
        solve (n-1, arrivee, inter, origine);
    }
}

Game :: ~ Game(){
}

ostream & operator<< (ostream & os, const Game& g)
{
     os << "Etat de chaque pilier à ce stage \n"<< '\n';
     for(int i = 0; i < 3; ++i) 
         os << g.towers[i] << '\n'; 
    return os;
}
