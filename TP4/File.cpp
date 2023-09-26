// This example is used to illustrate the deep copy principle 
#include "File.h"

File::File(string name, string extension, unsigned int size): name{name}, extension{extension}, size{size}
{}

File::~File(){
}

unsigned int File:: getCompressedSize(){
    return 0;
}

string File::getName() const{
    return name;
}
       
string File::getExtension() const{
    return extension;
}
        
unsigned int File::getSize() const{
    return size;
}
    
void File::setName(string nom) {
    name = nom;
}
        
void File::setExtension(string ext) {
    extension = ext;
}
        
void File::setSize(unsigned int taille){
    size = taille;
}

ostream & operator<< (ostream & os, File& f)
{
     f.printMyself(os);
    return os;
}

void File::printMyself(ostream& os)
{
    os << "file name : "<< this->getName()<<this->getExtension()<<" Size: "<<this->getSize()<<' ';
}