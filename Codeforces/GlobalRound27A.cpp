#include <bits/stdc++.h>
using namespace std;
#define int long long
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define       all(x)    x.begin(), x.end()
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9; 
void solve()
{
    //freopen("input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    int n,k; 
    cin >> n >> k; 
    vector<int> a(n + 1 , -1); 
    int d = 1; 
    for(int i = k; i <= n; i += k) {
        a[i] = d; 
        d += 1; 
    }
    for (int i = 1; i <= n; ++i) if (a[i] == -1) {
        a[i] = d; 
        d += 1; 
    }
    for (int i = 1; i <= n; ++i) cout<<a[i]<<" "; 
    cout<<endl; 
}
signed main()
{
    fast; 
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}