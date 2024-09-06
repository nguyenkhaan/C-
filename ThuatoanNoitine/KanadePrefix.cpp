#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n; cin>>n; 
    vector<int> a(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    int prefix[1000]; 
    prefix[0] = a[0]; 
    int ans = INT_MIN; 
    int smin = 0; 
    for (int i=1; i<n; i++) prefix[i] = a[i] + prefix[i-1]; 
    for (int i=0; i<n; i++) 
    {
        if ((prefix[i] - smin) >= ans) ans = prefix[i] - smin; 
        smin = min(prefix[i],smin); 
    }
    cout<<ans; 
}