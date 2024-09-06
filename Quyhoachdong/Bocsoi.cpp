#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    int k; cin>>k; 
    int f[10000]; 
    vector<int> a(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    for (int i=0; i<=k; i++) f[i] = 0;  
    for (int i=1; i<=k; i++) 
    {
        for (int j=0; j<n; j++)
        {
            if (i>=a[j] && f[i-a[j]]==0) 
            {
                f[i] = 1; 
                break; 
            }
        }
    }
    if (f[k] == 1) cout<<"Nguoi thu nhat thang"; 
    else cout<<"Nguoi thu hai thang"; 
    return 0; 
    
}