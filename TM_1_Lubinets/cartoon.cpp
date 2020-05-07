#include "cartoon.h"
#include <string>

bool cartoon::InData(ifstream& ifst) {
    int cartoon_type = 0;
    if (!In_common(ifst)) { return false; };
    string temp;
    ifst >> temp;
    if (temp.length() != 1)
    {
        return false;
    }
    if (isdigit(temp[0]) == 0)
    {
        return false;
    }

    cartoon_type = std::stoi(temp);
    switch (cartoon_type)
    {
    case 1: 
        way = DRAWN;
        return true;
    case 2:
        way =PUPPET;
        return true;
    case 3:
        way =PLASTICINE;
        return true;
    default:
        return false;
    }
   
}

void cartoon::Out(ofstream& ofst) {
    ofst << "CARTOON " << endl;
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

void cartoon::Out_cartoon(ofstream& ofst) {
    Out(ofst);
}

