#include "Text.h"

Text::Text(string name, string extension, unsigned int size, Encoding encode):
        File(name, extension, size), encoding{encode}{}

unsigned int Text::getCompressedSize(){
    return (encoding == ASCII) ? getSize() * 0.5 : getSize() * 0.6;
}
        
Encoding Text::getEncoding() const{
    return encoding;
}        
         
void Text::setEncoding(Encoding code){
    encoding = code;
}

/*ostream & operator<< (ostream & os, const Text& t)
{
     os << "file name : "<< t.getName()<<t.getExtension()<<"    Size= "<<t.getSize()<<"Encoding: "<<t.getEncoding()<<' ';
    return os;
}*/
void Text::printMyself(ostream& os)
{
    os << "file name : "<< this->getName()<<this->getExtension()<<"    Size= "<<this->getSize()<<"      Encoding: "<<((this->getEncoding() == 0)? "Ascii":"Unicode")<<' ';
    //os << "file name : "<< this->getName()<<this->getExtension()<<" Size: "<<this->getSize()<<' ';
}

ostream & operator<< (ostream & os, Text & t)
{
    t.printMyself(os);
    return os;
}