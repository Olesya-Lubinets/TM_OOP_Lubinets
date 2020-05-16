#ifndef MOVIE_H
#define MOVIE_H 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Movie {
 public:
  string GetTitle() { return title_; }
  string GetCountry() { return country_; }
  void SetTitle(string tit) { title_ = tit; }
  void SetCountry(string con) { country_ = con; }  
  static Movie* In(ifstream& ifst);
  virtual bool InData(ifstream& ifst) = 0;
  virtual void Out(ofstream& ofst) = 0;
  virtual void OutCartoon(ofstream& ofst) { ofst << endl; }
  int Count();
  bool Compare(Movie& other);
  void OutCommon(ofstream& ofst);
  bool InCommon(ifstream& ifst);
  virtual void OutGroup(ofstream& ofst) { ofst << endl; }
  virtual void MultiMethod(Movie* other, ofstream& ofst) = 0;
  virtual void MMCartoon(ofstream& ofst) = 0;
  virtual void MMFiction(ofstream& ofst) = 0;
  virtual void MMDocumentary(ofstream& ofst) = 0;

 protected:
  string title_;
  string country_;
};

#endif
