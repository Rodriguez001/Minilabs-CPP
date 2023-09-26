#include "Robot.h"

Robot::Robot(): name{""}, type{""}, price{0.0}{}


Robot::Robot(const string & n, const string & t, double p) : 
        name{n}, type{t}, price{p}{}

string Robot::getName() const{
    return name;
}

bool Robot::operator<(const Robot & other) const{
    return this->price < other.price;
}

ostream & operator<<(ostream & out, const Robot & p){    
    out <<p.name<<" "<<p.type<<" "<<p.price<<endl;
    return out;
}

istream & operator>>(istream & in, Robot & p){
    if(!(in>>p.name>>p.type>>p.price)){
        in.setstate(ios::failbit);
    } 
    return in;    
}