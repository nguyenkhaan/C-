#include <bits/stdc++.h>
using namespace std; 
const int maxn = 1e8; 
#pragma GCC optimize("O2") 
#define int long long 
void solve() 
{
    int n; 
    cin >> n; 
    vector<pair<int,int>> a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i].first >> a[i].second; 
    vector<pair<int,int>> b; 
    for (int i = 0; i < n; ++i) 
    {
        b.push_back(make_pair(a[i].first , 1)); 
        b.push_back(make_pair(a[i].second, -1)); 
    }
    int ans = 0, ma = 0 ; 
    sort(b.begin(), b.end()); 
    for (int i = 0; i < b.size(); ++i) 
    {
        ans += b[i].second; 
        ma = max(ma,ans); 
    }
    cout<<ma; 
}
signed main() 
{
    solve(); 
}