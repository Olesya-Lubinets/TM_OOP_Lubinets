#pragma once
#include <iostream>
#include <fstream>
#include "movie.h"

using namespace std;

class fiction : public movie {
    string director; 
public:
    void InData(ifstream& ifst); // ����
    void Out(ofstream& ofst); // �����
    void MultiMethod(movie* other, ofstream& ofst) ;
    void MMCartoon(ofstream& ofst) ;
    void MMFiction(ofstream& ofst);
    fiction(); 
};
