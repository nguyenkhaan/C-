#include <bits/stdc++.h>
#define int long long 
using namespace std; 
void solve() 
{
    int n; 
    cin>>n; 
    vector<int> a(n); 
    int pos = 0; 
    for (int i = 0; i < n; ++i) cin>>a[i]; 
    int ans = 0; 
    for (int i = 1; i < n; ++i) if (a[i] < a[i - 1]) 
    {
        ans += abs(a[i] - a[i-1]); 
        a[i] = a[i-1]; 
    }
    cout<<ans<<endl; 
}
main() 
{
    solve(); 
}