#include <bits/stdc++.h>
using namespace std; 
struct NhanVien 
{
    string name; 
    string ID; 
    int salary; 
    NhanVien() {}; 
    void info() 
    {
        cout<<this->name<<endl; 
        cout<<this->ID<<endl; 
        cout<<this->salary<<endl; 
    }
}; 
int main() 
{
    NhanVien a[3];  
    for (int i = 0; i < 3; ++i) 
    {
        cin>>a[i].name; 
        cin>>a[i].ID; 
        cin>>a[i].salary; 
    }
    for (int i = 0; i < 3; ++i) 
    {
        a[i].info(); 
        cout<<endl; 
    }
}
