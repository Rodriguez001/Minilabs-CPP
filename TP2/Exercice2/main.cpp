#include <iostream>
#include "Game.h"
#include "Disk.h"
#include "Tower.h"

const unsigned int N = 4; // la taille de la tour de depart ou la dimension du jeu
const unsigned int Pas_de_disque = 0 ;// Pas de disque dans la tour de depart



int main() {
    Game * game =  new Game(4);
    Disk * t_disk[N];
    Tower *depart, *Intermediaire, *Arrivee;
    //Affichage de debut d'annonce du jeu
    cout << "Jeu de la tour d'hanoi avec "<<N<<" disques\n";
    //cout << *game << endl;
    // initialisation des disques
    for (unsigned int i = 0; i < N; i++) {t_disk[i] = new Disk(i+1);}
    //for(unsigned int i = 0; i < N; i++) cout << *t_disk[i] << endl;
    depart = new Tower("Tour_Depart", N);
    Intermediaire = new Tower("Tour_Intermediare", N);
    Arrivee = new Tower("Tour_Arrivee", N);
    for (unsigned int i = 0; i < N; i++) 
        (*depart).pushDisk(*t_disk[N-i-1]);
    //cout << *depart << *Intermediaire << *Arrivee << endl;
    //cout << Arrivee->popDisk() << Intermediaire->popDisk() << depart->popDisk() << endl;
    game->set_tower(0, *depart);
    game->set_tower(1, *Intermediaire);
    game->set_tower(2, *Arrivee);
    //cout << *game << endl;
    game->solve(N, *depart, *Intermediaire, *Arrivee);
    //cout << *game << endl;


	
	return 0;
}
