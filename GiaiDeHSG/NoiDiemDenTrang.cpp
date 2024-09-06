#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    cout<<"Nhap diem den: ";
    vector<pair<int,int>> a(n*2); 
    for (int i=0; i<n; i++) 
    {
        cin>>a[i].first; 
        a[i].second = 1; //Diem den 
    } 
    cout<<"Nhap diem trang: "; 
    for (int i=n; i<n*2; i++) 
    {
        cin>>a[i].first; 
        a[i].second = 0; //diem trang 
    }
    set<pair<int,int>> s; 
    for (int i=0; i<n*2; i++) s.insert(a[i]); 
    auto p = s.begin(); 
    int k = 0;
    for (int i=0; i<n*2-1; i++) 
    {

        if ((a[i].second == 1 && a[i+1].second == 0) || (a[i].second == 0 && a[i+1].second == 1))
        {
            k++; 
            a[i].second = 2; 
            a[i+1].second = 2; 

        }
        advance(p,1); 
    }
    cout<<k;
    

}