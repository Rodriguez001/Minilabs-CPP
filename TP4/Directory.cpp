#include "Directory.h"

Directory::Directory(string name): name{name}{}

string Directory::getName() const{
    return name;
}        
        
void Directory::setName(string nom){
    name = nom;
}

vector<File *> Directory::getFiles() const{
    return files;
}
       
File* Directory::popFile(unsigned int i) const{
    return files[i];
}

void Directory::setFiles(vector<File *> files){
    files = files;
}
        
Directory* Directory::pushFile(File * file){
    files.push_back(file);
    return this;
}        
    
ostream & operator<<(ostream& os, const Directory & d){
    os <<"Folder name: "<<d.getName()<<" and List of files:"<<'\n';
    for(auto f : d.files) os << *f <<'\n';
    return os;
}

unsigned int Directory::getAvRateCompressedSize(){
    unsigned int rate = 0;
    for(auto f : files) rate += f->getCompressedSize()/f->getSize();
    return rate / files.size() ;
}

unsigned int Directory::getAvRateCompressedType(string type){
    vector<string> extensions;
    unsigned int rate = 0, tmp;
    tmp = (type == "image")? 1:(type =="video")? 2:0;
    switch(tmp) 
    {
    case 0:
         extensions = { ".doc", ".xml", ".html", ".txt", ".pdf", ".docx" };
        break;
    case 1:
         extensions = { ".img", ".jpg", ".tiff", ".jpeg", ".gif", ".png" };
         break;
    case 2:
        extensions = { ".mp4", ".fly", ".mov", ".avi", ".wmv", ".mkv", ".xdiv" };
         break;
    default:
        break;
    }
    tmp = 0;
    
    for(auto f : files){
        int ok = 0;
        for(unsigned int i = 0; i < extensions.size();i++){            
            if(extensions[i] == f->getExtension()) {ok = 1; break; }
        }
        if(ok==1) {
            rate += f->getCompressedSize()/f->getSize();
            tmp++;
            //cout <<"tmp : " <<tmp <<"file extension :"<<f->getExtension()<<"OK = "<<ok<<"rate here: "<<rate<<endl;
        }
    }    
    return rate / tmp;
   
}