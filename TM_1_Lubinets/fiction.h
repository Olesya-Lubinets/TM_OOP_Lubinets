#pragma once
#include <iostream>
#include <fstream>
#include "movie.h"

using namespace std;

class fiction : public movie {
    string director; 
public:
    bool InData(ifstream& ifst); // ����
    void Out(ofstream& ofst); // �����
    fiction(); 
    void Out_group(ofstream& ofst);

    string get_director() { return director; }
    void set_director(string dir) { director = dir; }
};
