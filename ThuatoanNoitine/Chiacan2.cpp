#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std; 
map<pair<int,int>,int> b; 
int n; 
int id(int i, int s)
{
    return (s+i-1)/s; 
}
int Count(int a[],int l, int r, int k) 
{
    int dem = 0;
    int s = sqrt(n); 
    int x; 
    for (int i=1; i<=n; i++) 
    {
        x = id(i,s); 
        b[make_pair(x,a[i])]++; 
    }
    int idl = id(l,s);
    int idr = id(r,s); 
    for (int i = idl+1; i<=idr-1; i++) 
    {
        dem+=b[make_pair(i,k)]; 
    }
    int Endl = s*id(l,s); 
    int Startr = s*id(r,s) - (s-1);
    for (int i=l; i<=Endl; i++) if (a[i] == k) dem++; 
    for (int i=Startr; i<=r; i++) if (a[i] == k) dem++; 
    return dem; 

}
int main() 
{
    cin>>n; 
    int *a = new int[10000]; 
    for (int i=1; i<=n; i++) cin>>a[i]; 
    int m = Count(a,2,6,2); 
    cout<<m; 
}