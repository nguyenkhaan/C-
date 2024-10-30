#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#define all(a) a.begin(),a.end()
#define N 1000000001
void solve() 
{
    int n; 
    cin >> n; 
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    sort(all(a));
    a.push_back(N); 
    int ans = 0; 
    for (int i = 0; i < n; ++i) if (a[i] != a[i + 1]) ++ans; 
    cout<<ans; 
}
main() 
{
    solve(); 
}