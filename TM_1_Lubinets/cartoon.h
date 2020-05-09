#ifndef CARTOON_H
#define CARTOON_H

#include <iostream>
#include <fstream>
#include <string>
#include "movie.h"
using namespace std;

 enum WayCreate {
  DRAWN = 1,
  PUPPET,
  PLASTICINE,
};

class Cartoon : public Movie {
  public:
   WayCreate GetWay() { return way_; }
   void SetWay(WayCreate w) { way_ = w; }
   bool InData(ifstream& ifst);
   void Out(ofstream& ofst);
   void OutCartoon(ofstream& ofst) { Out(ofst); }

  protected:
   WayCreate way_;
 };

#endif
