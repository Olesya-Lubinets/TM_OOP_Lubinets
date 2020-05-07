#include "Documentary.h"
#include <string>

bool documentary::InData(ifstream& ifst)
{
    if (!In_common(ifst)) { return false; };
    string temp;
    ifst >> temp;
    if (temp.length() != 4) { return false; }
    for (int i = 0; i < 4; i++)
    {
        if (!isdigit(temp[i]))
            return false;
    }
    year_release = stoi(temp);
    return true; 
}

void documentary::Out(ofstream& ofst)
{
    ofst << "DOCUMENTARY MOVIE " << endl;
    ofst << "Year of release: " << year_release << endl;
    Out_common(ofst);
}

void documentary::Out_group(ofstream& ofst)
{
    Out(ofst);
}

