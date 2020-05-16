#include "fiction.h"

void fiction::InData(ifstream& ifst)
{
    ifst >> director;
}

void fiction::Out(ofstream& ofst) 
{
    ofst << "FICTION MOVIE "<<endl;
    ofst << "Director: "<< director << endl;
    ofst << "Title: "<< title << endl;
}

fiction::fiction()
{
    director = "Incorrect name!";
}

void fiction::MultiMethod(movie* other, ofstream& ofst) {
  other->MMFiction(ofst);
}

void fiction::MMCartoon(ofstream& ofst) {
  ofst << endl << "Cartoon and Fiction" << endl;
}

void fiction::MMFiction(ofstream& ofst) {
  ofst << endl << "Fiction and Fiction" << endl;
}