#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int k; 
    cin>>k; 
    int i = 1; 
    int v(0),d(0); 
    while (i <= k) 
    {
        if (i & 1) v += i*i; 
        else d += i*i; 
        ++i; 
    }
    cout<<d - v; 
}