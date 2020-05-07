#pragma once

#include <iostream>
#include <fstream>

#include "movie.h"
using namespace std;
class documentary :public movie
{
    int year_release;
    public:
    bool InData(ifstream& ifst);
    void Out(ofstream& ofst);
    void Out_group(ofstream& ofst);

    int get_year() { return year_release; }
    void set_year(int year) { year_release = year; }
};








