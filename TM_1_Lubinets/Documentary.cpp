#include "Documentary.h"

void documentary::InData(ifstream& ifst)
{
    ifst >> year_release;
}

void documentary::Out(ofstream& ofst)
{
    ofst << "DOCUMENTARY MOVIE " << endl;
    ofst << "Year of release: " << year_release << endl;
    ofst << "Title: " << title << endl;
}

documentary::documentary()
{
    year_release = -1;
}