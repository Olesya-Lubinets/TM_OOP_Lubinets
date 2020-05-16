#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class movie {
protected:
    string title;  
public: 
    static movie* In(ifstream& ifst);
    virtual void InData(ifstream& ifst) = 0;
    virtual void Out(ofstream& ofst) = 0;  
    virtual void MultiMethod(movie* other, ofstream& ofst) = 0;
    virtual void MMCartoon(ofstream& ofst) = 0;
    virtual void MMFiction(ofstream& ofst) = 0;
};

