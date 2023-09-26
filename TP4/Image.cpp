#include "Image.h"

Image::Image(string name, string extension, unsigned int size, unsigned int width, unsigned int height):
    File(name, extension, size), width{width}, height{height}{}

		
unsigned int Image::getCompressedSize(){
    return width * height / 2 ;
}
        
unsigned int Image::getWidth() const{
    return width;
} 

unsigned int Image::getHeight() const{
    return height;
}        
        
void Image::setWidth(unsigned int width){
    width = width;
}
        
void Image::setHeight(unsigned int height){
    height = height;
}
      
/*ostream & operator<<(ostream& os, const Image & t){
     os << "file name : "<< t.getName() <<t.getExtension()<<"   Size= "<<t.getSize()<<"     Width= "<<t.getWidth()<<"   Height= "<<t.getHeight()<<' ';
     return os;
}*/

void Image::printMyself(ostream& os) 
{
    os << "file name : "<< getName() <<getExtension()<<"   Size= "<<getSize()<<"     Width= "<<getWidth()<<"   Height= "<<getHeight()<<' ';
    //os << "file name : "<< this->getName()<<this->getExtension()<<" Size: "<<this->getSize()<<' ';
}

ostream & operator<< (ostream & os, Image & t)
{
    t.printMyself(os);
    return os;
}