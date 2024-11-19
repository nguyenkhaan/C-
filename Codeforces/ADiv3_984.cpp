#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#define int long long 
#define vi vector<int> 
#define YES cout<<"yes \n" 
#define NO cout<<"no \n" 
void solve() 
{
    int n; 
    cin >> n; 
    vi a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    int ok = 1; 
    for (int i = 1; i < n; ++i) {
        int k = abs(a[i] - a[i-1]); 
        if (!(k == 7 || k == 5)) {
            ok = 0; 
            break; 
        }
    }
    if (ok) YES; 
    else NO; 
}
signed main() 
{
    #define LOCAL 
    #ifdef LOCAL 
    int tc; 
    cin>>tc; 
    while (tc--) solve(); 
    #endif
}