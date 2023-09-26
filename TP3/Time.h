// This example is used to illustrate the deep copy principle 
#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Time{
	private :
		unsigned short hour;
		unsigned short minute;
		unsigned short second;
	public :
		// the constructor 
		Time(unsigned short hour, unsigned short minute, unsigned short second);
		// the destructor
		~Time();
		// An overloaded operator<<, allowing us to print a pair via cout<<
	friend ostream& operator<<(ostream& out, const Time & t);
	bool operator<(const Time & other) const;
	bool operator>(const Time & other) const;
	bool operator==(const Time & other) const;
	bool operator!=(const Time & other) const;	
	bool operator<=(const Time & other) const;
	bool operator>=(const Time & other) const;
	friend bool operator < (const Time & t1, const Time & t2);
	Time & operator ++ ();
	Time & operator -- ();	
};
