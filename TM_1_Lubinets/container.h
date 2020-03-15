#pragma once
#define max_len 100
#include <iostream>
#include <fstream>

#include "movie.h"

using namespace std;

class container {
    
    int len; // ������� �����
    movie* cont[max_len];
public:
    void In(ifstream& ifst); // ����
    void Out(ofstream& ofst); // �����
    void Clear(); // ������� ���������� �� �����
    void Sort();
    container(); // ������������� ����������
    ~container() { Clear(); } // ���������� ����������
};
