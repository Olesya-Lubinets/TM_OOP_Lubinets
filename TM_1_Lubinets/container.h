#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>
#include <fstream>
#include "movie.h"
using namespace std;
#define max_len 100

class Container {
 public:
  void In(ifstream& ifst);  // Ввод
  void Out(ofstream& ofst);  // Вывод
  void Clear();  // Очистка контейнера от фигур
  void Sort();
  Container() { len_ = 0; }  // Инициализация контейнера
  ~Container() { Clear(); }  // Утилизация контейнера
  void OutCartoon(ofstream& ofst);
  void OutFilter(ofstream& ofst);

 protected:
  int len_;  // Текущая длина
  Movie* cont_[max_len];
};

#endif