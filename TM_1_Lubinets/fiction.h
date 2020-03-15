#pragma once
#include <iostream>
#include <fstream>
#include "movie.h"

using namespace std;

class fiction : public movie {
    string director; 
public:
    void InData(ifstream& ifst); // ввод
    void Out(ofstream& ofst); // вывод
    fiction(); 
};
