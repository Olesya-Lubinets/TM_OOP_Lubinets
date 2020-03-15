#include "cartoon.h"

void cartoon::InData(ifstream& ifst) {
    int cartoon_type = 0;
    ifst >> cartoon_type;
    switch (cartoon_type)
    {
    case 1: 
        way = DRAWN;
        break;
    case 2:
        way =PUPPET;
        break;
    case 3:
        way =PLASTICINE;
        break;
    default:
        cout<<"Incorrect way to create of cartoon";
        exit(1);
    }
    In_common(ifst);
}

void cartoon::Out(ofstream& ofst) {
    ofst << "CARTOON " << endl;
    ofst << "Title: " << title<<endl;
    switch (way) 
    {
    case 1:
        ofst << "It's a drawn cartoon" << endl;
        break;
    case 2:
        ofst << "It's a puppet cartoon" << endl;
        break;
    case 3:
        ofst << "It's a plasticine cartoon" << endl;
        break;
    }
   Out_common(ofst);
}

