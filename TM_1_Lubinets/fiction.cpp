#include "fiction.h"

void fiction::InData(ifstream& ifst)
{
    ifst >> director;
    In_common(ifst);
}

void fiction::Out(ofstream& ofst) 
{
    ofst << "FICTION MOVIE "<<endl;
    ofst << "Director: "<< director << endl;
    ofst << "Title: "<< title << endl;
    Out_common(ofst);
}

fiction::fiction()
{
    director = "Incorrect name!";
}