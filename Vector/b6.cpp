#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    vector<int> a; 
    int n; cin>>n; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a.push_back(x); 
    }
    int pos; cout<<"Nhap vi tri can xoa"; cin>>pos; 
    a.erase(a.begin()+pos); 
    cout<<"Mang sau khi xoa la: "; 
    for (vector<int>::iterator i =a.begin();i!=a.end(); i++) cout<<*i<<" "; 
    return 0;

}