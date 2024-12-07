#ifndef MATHLIB_CALCULATOR_H
#define MATHLIB_CALCULATOR_H
#include <bits/stdc++.h>
#define str string 
using namespace std; 
struct Point 
{
    double x; 
    double y; 
};
struct TamGiac 
{
    Point point[3]; 
}; 
extern TamGiac a[100]; 
struct Circle 
{
    Point point;  
    double r; 
}; 
extern Circle b[100]; 
extern int i,j; 
vector<str> split(str &s, char definder);
void _delete(str &s, char ch); 
void trim(str &s); 
void standard(str &s);
void make(vector<str> &lst, int &n, bool flag);
void my_main(ifstream &f, int &n1, int &n2); 
#endif
/*
CHIA TÁCH FILE TRONG C++ 
- Một file C++ có thể chia thành 3 phần 
* header.h: chứa các khai báo hàm, khai báo biến toàn cục 
* method.cpp: định nghĩa các hàm 
* main.cpp: sử dụng các hàm đã định nghĩa 
1. header.h 
- Đưa các khai báo hàm, biến vào đây 
- Cấu trúc 
#ifndef 
#define 

*/