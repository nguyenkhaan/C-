#include <stdio.h> 
#include <iostream> 
#include <limits.h>
#include <bits/stdc++.h>
using namespace std; 
#define min(a,b) ((a<=b)?a:b)
typedef long long int lli; 
typedef long int li; 
int main()
{
    li t; cin>>t; 
    for(li j=0; j<t; j++)
    {
    li n; cin>>n; 
    vector<lli> a(n); 
    li i; 
    for (i=0; i<n; i++) cin>>a[i]; 
    lli s = 0; 
    lli MIN =0; 
    for (i=0; i<n; i++) 
    {
        s+=a[i]; 
        MIN = min(MIN,s); 
    }
    cout<<s-2*MIN<<endl; 
    }
    return 0; 

}