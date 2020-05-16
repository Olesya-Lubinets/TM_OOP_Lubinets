#ifndef DOCUMENTARY_H
#define DOCUMENTARY_H

#include <iostream>
#include <fstream>
#include <string>
#include "movie.h"
using namespace std;

class Documentary : public Movie {
 public:
  int GetYear() { return year_release_; }
  void SetYear(int year) { year_release_ = year; }
  bool InData(ifstream& ifst);
  void Out(ofstream& ofst);
  void OutGroup(ofstream& ofst) { Out(ofst); }
  void MultiMethod(Movie* other, ofstream& ofst);
  void MMCartoon(ofstream& ofst);
  void MMFiction(ofstream& ofst);
  void MMDocumentary(ofstream& ofst);

 protected:
  int year_release_;
};

#endif 








