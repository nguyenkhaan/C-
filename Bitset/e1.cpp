#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    int s = 0; 
    vector<int> a(n); 
    for (int i=0; i<n; i++)
    {
        cin>>a[i]; 
        s ^= a[i]); 
    }
    cout<<s; 
}