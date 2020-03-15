#include "fiction.h"

void fiction::InData(ifstream& ifst)
{
    ifst >> director;
}

void fiction::Out(ofstream& ofst) 
{
    ofst << "FICTION MOVIE "<<endl;
    ofst << "Director: "<< director << endl;
    ofst << "Title: "<< title << endl;
}

fiction::fiction()
{
    director = "Incorrect name!";
}