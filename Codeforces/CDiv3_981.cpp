#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O2") 
#pragma GCC optimize("inline-functions") 
#pragma GCC target("avx2") 
#pragma GCC optimize("fast-math") 
#define For(a,b,c) for(a = b; a < c; ++a) 
#define int long long 
const int maxN = 1e5; 
const int maxT = 1e4; 
void solve() 
{
    int n; 
    cin >> n;  
    int a[n + 1]; 
    int i; 
    For(i,0,n) cin >> a[i]; 
    auto swap = [](int &a, int &b) {
        int t = a; 
        a = b; 
        b = t; 
    }; 
    For(i,1,n/2) 
    {
        if (a[i] == a[i-1]) swap(a[i],a[n - i - 1]); 
        else if (a[n - i - 1] == a[n - i]) swap(a[i] , a[n-i-1]); 
    }
    int ans = 0; 
    For(i,1,n) if (a[i] == a[i-1]) ++ans; 
    cout<<ans<<endl; 
}
signed main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}
