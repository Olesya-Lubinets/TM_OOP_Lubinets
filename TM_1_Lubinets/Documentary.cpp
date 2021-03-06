#include "Documentary.h"

bool Documentary::InData(ifstream& ifst) {
    if (!InCommon(ifst)) return false;
    string temp;
    ifst >> temp;
    if (temp.length() != 4) return false;
    for (int i = 0; i < 4; i++){
        if (!isdigit(temp[i])) return false;
    }
    year_release_ = stoi(temp);
    return true; 
}

void Documentary::Out(ofstream& ofst) {
    ofst << "DOCUMENTARY MOVIE " << endl;
    ofst << "Year of release: " << year_release_ << endl;
    OutCommon(ofst);
}

void Documentary::MultiMethod(Movie* other, ofstream& ofst) {
  other->MMDocumentary(ofst);
}

void Documentary::MMCartoon(ofstream& ofst) {
  ofst << endl << "Cartoon and Documentary" << endl;
}

void Documentary::MMFiction(ofstream& ofst) {
  ofst << endl << "Fiction and Documentary" << endl;
}

void Documentary::MMDocumentary(ofstream& ofst) {
  ofst << endl << "Documentary and Documentary" << endl;
}

