#include <stdio.h> 
#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    vector<int> a(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    int prime[n+1]; 
    auto Check = [&]()
    {
        for (int i=2; i<=n; i++) prime[i] = 1; 
        for (int i=2; i*i<=n; i++) 
        {
            if (prime[i] == 1) 
            {
                for (int j = i*i; j<=n; j+=i) prime[j] = 0; 
            }
        }
    };
    Check(); 
    for (int i=0; i<n; i++) if (prime[a[i]] == 1) cout<<a[i]<<"  "; 
}