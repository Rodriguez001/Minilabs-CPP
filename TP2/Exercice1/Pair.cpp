#include "Pair.h"
#include <iostream>
using namespace std;

Pair :: Pair (int a, int b) : pa {new int(a)}, pb {new int(b)} {
    }

Pair :: Pair (const Pair & other) : pa { new int (*other.pa)}, pb {new int (*other.pa)} {
}

Pair :: ~ Pair(){
    delete pa;
    delete pb;
}

ostream & operator<< (ostream & os, const Pair& p)
{
     os << "Paire : "<<'('<< *p.pa <<" ,"<< *p.pb <<')'<< '\n';
    return os;
}
