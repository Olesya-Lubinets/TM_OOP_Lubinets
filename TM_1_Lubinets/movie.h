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
    virtual void Out_cartoon(ofstream& ofst);
};

