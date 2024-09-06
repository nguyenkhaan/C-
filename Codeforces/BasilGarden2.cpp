//Cac bai toan tin hoc thuowng co y tuong rat quai 
#include <stdio.h> 
#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
typedef long long int lli; 
int main() 
{
    lli n; cin>>n; 
    vector<lli> a; 
    for (lli i=0; i<n; i++) 
    {
        lli x; cin>>x; 
        a.push_back(x); 
    }
    lli End[100]; 
    End[n-1] = a[n-1]; 
    lli d = 0; 
    for (lli i=n-2; i>=0; i--) 
    {
        if (a[i]<=a[i+1]) d = 1; 
        End[i] = End[i+1] + d; 
    }
    cout<<End[0]; 
}