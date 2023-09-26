#ifndef __VECTOR_HPP_
#define __VECTOR_HPP_
#include <iostream>
using namespace std;

    class Vector {
        private :
            double* elements;
            unsigned int sz ;
        public :
            Vector(unsigned int s) ;
            unsigned int size() const ;
            double& operator[](unsigned int i);
            friend ostream & operator<<(ostream & os, const Vector& V); 
    } ;
#endif