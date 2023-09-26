#include "Video.h"

Video::Video(string name, string extension, unsigned int size, unsigned int duration):
    File(name, extension, size), duration{duration}{}

		
unsigned int Video::getCompressedSize(){
    return duration * 0.8 ;
}
        
unsigned int Video::getDuration() const{
    return duration ;
}         
        
void Video::setDuration(unsigned int duree){
    duration = duree;
}
      
/*ostream & operator<<(ostream& os, const Video & v){
     os << "file name : "<< v.getName()<<v.getExtension()<<"    Size= "<<v.getSize()<<"     Duration= "<<v.getDuration()<<' ';
     return os;
}*/
void Video::printMyself(ostream& os)
{
    os << "file name : "<< this->getName()<<this->getExtension()<<"    Size= "<<this->getSize()<<"     Duration= "<<this->getDuration()<<' ';
    //os << "file name : "<< this->getName()<<this->getExtension()<<" Size: "<<this->getSize()<<' ';
}
ostream & operator<< (ostream & os, Video & t)
{
    t.printMyself(os);
    return os;
}