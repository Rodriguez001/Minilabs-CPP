#include "Vector.hpp"
#include <iostream>
using namespace std;

Vector :: Vector(unsigned int s){
    if(s>0){
        sz = s;
        elements = new double[s];
    }
    else{
        throw std::invalid_argument("Entrez une taille de vector positive");
        cout<<"Error: Size of Vector must be greater than 0"<<endl;
    }
}

unsigned int Vector :: size() const{
    return sz;
}

double&  Vector :: operator[](unsigned int i){
    return elements[i];
}

ostream & operator<< (ostream & os, const Vector& V)
{
    for(unsigned int i = 0; i < V.size(); i++){ os << V.elements[i] << " "; }
    return os;
}

