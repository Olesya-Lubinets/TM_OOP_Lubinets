#include "fiction.h"

void fiction::InData(ifstream& ifst)
{
    In_common(ifst);
    ifst >> director;
    
}

void fiction::Out(ofstream& ofst) 
{
    ofst << "FICTION MOVIE "<<endl;
    ofst << "Director: "<< director << endl;
    Out_common(ofst);
}

fiction::fiction()
{
    director = "Incorrect name!";
}

void fiction::Out_group(ofstream& ofst)
{
    Out(ofst);
}
