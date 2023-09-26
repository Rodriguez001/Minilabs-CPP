#include "Tower.h"
#include <iostream>
using namespace std;

const int Maximum_disk = 4;

Tower::Tower(){
    name = "";
    nb_disks = 0;
    Max_disk = Maximum_disk;
    disks = new Disk[Max_disk];
}    

Tower :: Tower (string nom, int n) : name {nom}, nb_disks {0}, Max_disk {n}{
    if (n > 0) {
        disks = new Disk[n];
    }    
}

Tower :: Tower (const Tower & other) : name {other.name}, nb_disks {other.nb_disks} {
    if (nb_disks > 0) {
        disks = new Disk[nb_disks];
        for (int i = 0; i < nb_disks; i++) {
            disks[i] = other.disks[i];
        }
    }
}

string Tower :: getName() const {
    return name;
}

void Tower :: setName (string nom) {
    name = nom;
}

int Tower :: getNb_Disks() const {
    return nb_disks;
}

void Tower :: setNb_Disks(int n){
    nb_disks = n;
}

Disk  Tower :: getDisks (int i) const {
    return disks[i];
}

void Tower :: setDisks (int i, Disk& disk) {
    disks[i] = disk;

}

void Tower :: pushDisk (Disk& disk) {
    if(nb_disks < Max_disk) {
    disks[nb_disks] = disk;
    nb_disks++;
   }
   else {
    cout << "Desolé la "<< name <<" est pleine" << endl;
   }
   
}

Disk Tower :: popDisk () {
    if(nb_disks > 0) {
    nb_disks--;
    return disks[nb_disks];
    }
    else{
        cout << "Desolé la "<< name <<" est vide" << endl;
        return Disk();
    }
}

Tower :: ~ Tower(){
}

ostream & operator<< (ostream & os, const Tower& t)
{
     os << t.name <<" - ";
     for (int i = 0; i < t.nb_disks; i++) {
         os << t.disks[i] <<" ";
     }
     os << endl;
 
    return os;
}
