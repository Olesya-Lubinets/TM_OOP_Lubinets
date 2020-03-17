#include "Documentary.h"

void documentary::InData(ifstream& ifst)
{
    In_common(ifst);
    ifst >> year_release;
    
}

void documentary::Out(ofstream& ofst)
{
    ofst << "DOCUMENTARY MOVIE " << endl;
    ofst << "Year of release: " << year_release << endl;
    Out_common(ofst);
}

