#include <stdio.h> 
#include <math.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n;  
int id(int i, int s) 
{
    return (s+i-1)/s; 
}
float average(int a, int l, int r) 
{
    int s = sqrt(n);
    int b[1000]; 
    for (int i=1; i<=n; i++) 
    {
        int id = id(i,s); 
        b[id]+=a[i]; 
    }
    int idl = id(l,s); 
    int idr = id(r,s); 
    int sum = 0; 
    for (int i=idl+1; i<=idr-1; i++) sum+=b[i]; 
    int Endl = s*idl; 
    int Startr = s*idr - (s-1); 
    for (int i = idl; i<=Endl; i++) sum+=a[i]; 
    for (int i = Startr; i<=r; i++) sum+=a[i]; 
    return sum / (l-r+1); 
}
int main() 
{
    cin>>n; 
    vector<int> a(n); 
    for (int i=1; i<=n; i++) cin>>a[i]; 

}