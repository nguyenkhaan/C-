/*
Tạo ra một mảng vector gồm n phần tử set. Cập nhật dãy số ai vào phần tử set 
và in ra dãy số đó 

*/
#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    vector<set<int>> a; 
    set<int> b; 
    a.push_back(b); 
    int n; cin>>n; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a[0].insert(x); 
    }
    auto p = a.begin(); 
    auto p1 = p->begin(); 
    for (int i=0; i<n; i++)
    {
        cout<<*p1; 
        advance(p1,1); 
    }
    return 0; 
}