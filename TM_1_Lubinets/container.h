#pragma once
#define max_len 100
#include <iostream>
#include <fstream>

#include "movie.h"

using namespace std;

class container {
    
    int len; // текущая длина
    movie* cont[max_len];
public:
    void In(ifstream& ifst); // ввод
    void Out(ofstream& ofst); // вывод
    void Clear(); // очистка контейнера от фигур
    void Sort();
    container(); // инициализация контейнера
    ~container() { Clear(); } // утилизация контейнера
};
