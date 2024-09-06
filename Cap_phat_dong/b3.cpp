#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    vector<vector<int>> a; 
    int n; cin>>n; 
    vector<int> b; 
    a.push_back(b); //Thêm 1 lá vào cây dữ liệu  
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a[0].push_back(x); 
    }
    auto p = a.begin(); 
    auto p1 = p->begin(); 
    for (int i=0; i<n; i++) cout<<*(p1+i); 
    return 0;
}