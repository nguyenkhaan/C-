#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <string> 
using namespace std; 
int main() 
{
    int n; cin>>n; 
    //Truy xua tuoi cua tat ca nguoi 
    map<int,string> nguoi; 
    for (int i=0; i<n; i++) 
    {
        cout<<"Nhap tuoi: "; int t; cin>>t; 
        std::cin.ignore(); 
        cout<<"Nhap ten: "; std::string name; getline(std::cin,name); 
        nguoi.insert({t,name}); 
    }
    for (map<int,string>::iterator pointer_nguoi = nguoi.begin(); pointer_nguoi!=nguoi.end(); pointer_nguoi++) 
    {
        cout<<(*pointer_nguoi).first<<"  "<<(*pointer_nguoi).second<<endl; 
    }
    return 0;
    
}