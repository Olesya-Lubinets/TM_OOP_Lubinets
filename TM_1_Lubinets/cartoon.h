#pragma once
#include <iostream>
#include <fstream>
#include "movie.h"

using namespace std;

class cartoon : public movie {
    enum Way_create { DRAWN=1, PUPPET, PLASTICINE, };
    Way_create way;
public:
    void InData(ifstream& ifst); 
    void Out(ofstream& ofst); 
    void Out_cartoon(ofstream& ofst);

};

