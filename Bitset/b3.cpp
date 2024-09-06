#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
#include <string> 
using namespace std; 
int main() 
{
    const int k = 32; 
    int l,n; 
    cin>>l>>n; 
    vector<int> a(l); 
    vector<bitset<k>> b;  //mang bitset b 
    for (int i=0; i<l; i++) 
    {
        cin>>a[i]; 
        b.push_back(bitset<k>(a[i])); 
    } 
    int c = 0; 
    for (int i=0; i<n; i++)
    {
        int d0 = 0; 
        int d1 = 1; 
        for (int j=0; j<b.size(); j++)
        {
            if (b[j][i] == 0) d0 ++; 
            else d1++; 
        }
        if (d1>d0) c |= (1<<i);  
    }
    cout<<c;  
}