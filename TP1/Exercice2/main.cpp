#include "Vector.hpp"
#include <cmath>
#include <iostream>
using namespace std;



double sum_sqrt(Vector& V){
    double sum = 0.0;
    for(unsigned int i = 0; i < V.size(); i++){
        sum += sqrt(V[i]);
    }
    return sum;
}

int main(){
    int n;
    // On demande la taille du vecteur
     cout << "Entrez la taille du vecteur: " << endl;
     //On recupere dans la variable n
     cin >> n;
    // On l'initialise avec n valeur aléatoire    
    Vector v(n);
    srand((unsigned int)time(0));
    for(unsigned int i = 0; i < v.size(); i++){
        v[i] = rand() % 10; 
    }
    cout << "affichage du vecteur " << endl;
    cout << v << endl;
    //appel de la fonction Sum sur le vecteur
    double sum = sum_sqrt(v);
    // afficher le resulat
    cout << "Somme des racines des éléments du vecteurs: " << sum << endl;    
    return 0;
}