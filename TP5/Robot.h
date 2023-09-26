#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


class Robot {
	private :
		std::string name;
		std::string type;
		double price;
	public :
		Robot();
		Robot(const string & n, const string & t, double p);
		string getName() const;
		bool operator<(const Robot & other) const;
		friend ostream & operator<<(ostream & out, const Robot & p);
		friend istream & operator>>(istream & in, Robot & p);
};
