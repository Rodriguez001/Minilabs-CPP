#include "Disk.h"
#include <iostream>
using namespace std;

Disk :: Disk(){
        diameter = 0;
}

Disk :: Disk (int d) : diameter {d}{
    }

Disk :: Disk (const Disk & other) : diameter {other.diameter}{
}

int Disk :: getDiameter() const {
    return diameter;
}

void Disk :: setDiameter (int d) {
    diameter = d;
}
Disk :: ~ Disk(){
}

ostream & operator<< (ostream & os, const Disk& d)
{
     os << " "<<d.diameter<<" ";
    return os;
}
