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
    fiction(); 
};
