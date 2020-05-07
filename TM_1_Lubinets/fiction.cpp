#include "fiction.h"
#include <string>

bool fiction::InData(ifstream& ifst)
{
    if (!In_common(ifst)) { return false; };
    string temp ;
    getline(ifst, temp, '\n');
    if ((temp) == "\0")
    {
        return false;
    }
    director = temp; 
    return true;
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
