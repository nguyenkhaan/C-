#include <bits/stdc++.h>
using namespace std; 
struct NhanVien 
{
    string surName = ""; 
    string name = ""; 
    string date = ""; 
    int salary = 0; 
    NhanVien() {};  //Constructor mac dinh 
    NhanVien(string surName , string name, string date, int salary)  
    {
        this->surName = surName; 
        this->name = name; 
        this->date = date; 
        this->salary = salary; 
    }
}; 
int main() 
{
    NhanVien a[15]; 
    for (int i = 0; i < 10; ++i) 
    {
        string surName,name,date; 
        int salary; 
        cin>>surName>>name>>date>>salary; 
        NhanVien x(surName,name,date,salary); 
        a[i] = x; 
    }
}