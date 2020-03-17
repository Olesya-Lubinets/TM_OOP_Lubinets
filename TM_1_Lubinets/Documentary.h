#pragma once

#include <iostream>
#include <fstream>

#include "movie.h"
using namespace std;
class documentary :public movie
{
    int year_release;
    public:
    void InData(ifstream& ifst);
    void Out(ofstream& ofst);
};








