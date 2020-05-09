#include "fiction.h"

bool Fiction::InData(ifstream& ifst) {
    if (!InCommon(ifst)) return false;
    string temp ;
    getline(ifst, temp, '\n');
    if ((temp) == "\0") return false;
    director_ = temp; 
    return true;
}

void Fiction::Out(ofstream& ofst) {
    ofst << "FICTION MOVIE "<<endl;
    ofst << "Director: "<< director_ << endl;
    OutCommon(ofst);
}




