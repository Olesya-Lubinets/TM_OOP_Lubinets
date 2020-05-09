#include "cartoon.h"

bool Cartoon::InData(ifstream& ifst) {
    if (!InCommon(ifst)) return false;
    string temp;
    ifst >> temp;
    if (temp.length() != 1) return false;
    if (isdigit(temp[0]) == 0) return false;
    int cartoon_type = std::stoi(temp);
    switch (cartoon_type){
    case 1: 
        way_ = DRAWN;
        return true;
    case 2:
        way_ = PUPPET;
        return true;
    case 3:
        way_ = PLASTICINE;
        return true;
    default:
        return false;
    } 
}

void Cartoon::Out(ofstream& ofst) {
    ofst << "CARTOON " << endl;
    switch (way_) {
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
   OutCommon(ofst);
}