#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class movie {
protected:
    string title;  
    string country;
public: 
    static movie* In(ifstream& ifst);
    virtual void InData(ifstream& ifst) = 0;
    virtual void Out(ofstream& ofst) = 0;  
    int Count();
    bool Compare(movie& other);
    void Out_common(ofstream& ofst);
    void In_common(ifstream& ifst);
};

