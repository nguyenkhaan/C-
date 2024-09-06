#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
typedef long int li; 
typedef long long int lli; 
void prefix_sum(vector<lli> &s, vector<lli> a, li n) 
{
    s.push_back(a[0]); 
    for (li i=1; i<n; i++) s.push_back(s[i-1]+a[i]); 
}
int main() 
{
    li t; cin>>t; 
    for (li j = 0; j<t; j++)
    {
        vector<lli> a; 
        li n; cin>>n; 
        a.resize(n); 
        for (int i=0; i<n; i++) cin>>a[i]; 
        vector<lli> pre_sum; 
        prefix_sum(pre_sum,a,n); 
        lli scl; 
        lli max = 0; 
        li ans = 0; 
        for (li i=0; i<n; i++) 
        {
            if (max<=a[i]) max = a[i]; 
            scl = pre_sum[i] - max; 
            if (scl == max) ans++; 
        }
        cout<<ans<<endl; 
    }

}