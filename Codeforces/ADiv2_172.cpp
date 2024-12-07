#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#define all(a) a.begin(),a.end() 
void solve() 
{
    int n,k; 
    cin >> n >> k;  
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    sort(all(a)); 
    int s = 0; 
    for (int i = n-1; i >= 0; --i) 
    {
        if (s + a[i] <= k) s += a[i]; 
        else break; 
    }
    cout<<k - s<<endl; 
}
signed main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}