#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#pragma GCC optimize("O3") 
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
const int maxN = 2024; 
void solve() 
{
    int n; 
    cin >> n; 
    int a[maxN]; 
    for (int i = 0; i < n; ++i) cin >> a[i];
    const int INF = 1e4; 
    int ans = INF;  
    for (int i = 0; i < n; ++i) 
    {
        int temp = i;  
        
        for (int j = i + 1; j < n; ++j) if (a[j] > a[i]) ++temp; 
        for (int j = i - 1; j >=0; --j) if (a[j] == a[i]) --temp; 
        ans = min(ans , temp); 
    }
    cout <<ans<<"\n"; 
}
signed main() 
{
    fast; 
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}