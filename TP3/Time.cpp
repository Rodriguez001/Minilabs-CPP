#include "Time.h"
#include <iostream>
using namespace std;

Time::Time(unsigned short hour, unsigned short minute, unsigned short second) : hour{hour}, minute{minute}, second{second} {

}

Time::~Time(){

}

ostream & operator<< (ostream & os, const Time& t)
{
     os << "Heure : "<< t.hour <<'h'<<t.minute<<"min"<<t.second<<'s';
    return os;
}
bool Time::operator< (const Time & other) const {
    return (hour < other.hour) 
    || ((hour == other.hour)&&(minute < other.minute)) 
        || ((hour == other.hour)&&(minute == other.minute)&&(second < other.second));
}

bool Time::operator> (const Time & other) const {
    return (hour > other.hour) 
    || ((hour == other.hour)&&(minute > other.minute)) 
        || ((hour == other.hour)&&(minute == other.minute)&&(second > other.second));
}

bool Time::operator == (const Time & other) const {
    return (hour > other.hour) && (minute > other.minute) && (second > other.second);
}
bool Time::operator != (const Time & other) const {
    return !(*this == other);
}

bool Time::operator <= (const Time & other) const {
    return !(hour <= other.hour) 
    || ((hour == other.hour)&&(minute <= other.minute)) 
        || ((hour == other.hour)&&(minute == other.minute)&&(second <= other.second));
}
bool Time::operator >= (const Time & other) const {
    return !(hour >= other.hour) 
    || ((hour == other.hour)&&(minute >= other.minute)) 
        || ((hour == other.hour)&&(minute == other.minute)&&(second >= other.second));
}
// pre-decrementation ici je decremente h m et s
Time & Time::operator -- (){
    --hour;
    --minute;
    --second;
    return *this;
}
// pre-incrementation ici j'incremente h m et s
Time & Time::operator ++ (){
    ++hour;
    ++minute;
    ++second;
    return *this;
}