#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include <fstream>
#include "movie.h"
using namespace std;
#define max_len 100

class Container {
 public:
  void In(ifstream& ifst);  // ����
  void Out(ofstream& ofst);  // �����
  void Clear();  // ������� ���������� �� �����
  void Sort();
  Container() { len_ = 0; }  // ������������� ����������
  ~Container() { Clear(); }  // ���������� ����������
  void OutCartoon(ofstream& ofst);
  void OutFilter(ofstream& ofst);

 protected:
  int len_;  // ������� �����
  Movie* cont_[max_len];
};

#endif