#pragma once
#include <iostream>
#include <fstream>
#include "movie.h"

using namespace std;

class cartoon : public movie {
    
   
public:
    bool InData(ifstream& ifst); 
    void Out(ofstream& ofst); 
    void Out_cartoon(ofstream& ofst);
    enum Way_create { DRAWN = 1, PUPPET, PLASTICINE, };

    Way_create way;

    Way_create get_way() { return way; }
    void set_way(Way_create w) { way = w; }

};

