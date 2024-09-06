#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    //Viet chuong trinh sap xep 1 mang 
    int n; cin>>n; 
    vector<int> a(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    auto swap = [](int &x, int &y)
    {
        int t = x; 
        x = y; 
        y = t;  
    }; 
    int l = 0; 
    int r = n - 1; 
    while (l<r) 
    {
        for (int i=0; i<=r-1; i++) if (a[i]>a[i+1]) swap(a[i],a[i+1]); 
        r--;
        for (int i=r; i>=l+1; i--) if (a[i]<a[i-1]) swap(a[i],a[i-1]); 
        l++; 
    }
    for (int i=0; i<n; i++) cout<<a[i]<<"   "; 
    
}