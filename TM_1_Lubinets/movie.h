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
    virtual void Out_cartoon(ofstream& ofst);
    int Count();
    bool Compare(movie& other);
    void Out_common(ofstream& ofst);
    void In_common(ifstream& ifst);
   virtual void Out_group(ofstream& ofst);
   
   string get_title() { return title; }
   string get_country() { return country; }
   void set_title(string tit) { title = tit; }
   void set_country(string con) { country = con; }

};

