#ifndef FICTION_H
#define FICTION_H

#include <iostream>
#include <fstream>
#include <string>
#include "movie.h"
using namespace std;

class Fiction : public Movie {
 public:
  string GetDirector() { return director_; }
  void SetDirector(string dir) { director_ = dir; }
  bool InData(ifstream& ifst);  // Ввод
  void Out(ofstream& ofst);  // Вывод
  Fiction() { director_ = "Incorrect name!"; }
  void OutGroup(ofstream& ofst) { Out(ofst); }

 protected:
  string director_;
};

#endif
