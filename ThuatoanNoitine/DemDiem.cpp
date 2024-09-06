#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int n = 0; 
vector<int> DemDiem(vector<pair<int,int>> a, int Lmax) 
{
    vector<int> b(Lmax+1); 
    for (int i=1; i<=Lmax; i++) b[i] = 0; 
    for (int i=0; i<n; i++) 
    {
        b[a[i].first]+=1; 
        b[a[i].second+1]-=1; 
    }
    vector<int> c(Lmax+1); 
    c[1] = b[1]; 
    for (int i=2; i<=Lmax; i++) c[i]=c[i-1]+b[i]; 
    return c; 
}
int main() 
{
    cin>>n; 
    vector<pair<int,int>> a(n); 
    int Lmax = 0; 
    for (int i=0; i<n; i++)
    {
        cin>>a[i].first>>a[i].second; 
        Lmax = max(Lmax,max(a[i].first,a[i].second)); 
    }
    vector<int> b = DemDiem(a,Lmax); 
    for (int i=1; i<=Lmax; i++) cout<<b[i]<<"  "; 
}