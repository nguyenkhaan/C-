#include <bits/stdc++.h>
using namespace std; 
#define MOD 1000000007 
int main() 
{
    int n; cin>>n; 
    vector<int> a(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    int mod = 0;
    for (int i=0; i<n; i++) 
    {
        mod = (mod+a[i]) % MOD; 
    }
    cout<<mod<<endl; 
    mod = 1; 
    for (int i=0; i<n; i++) 
    {
        mod = (mod*a[i])%MOD; 
    }
    cout<<mod; 
}