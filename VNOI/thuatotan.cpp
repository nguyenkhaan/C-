#include <bits/stdc++.h>
using namespace std;
#define int long long
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define       all(x)    x.begin(), x.end()
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9; 
vector<string> create(int n) 
{
    vector<string> ans; 
    for (int i = 0; i < (1 << n); ++i) 
    {
        string s = ""; 
        for (int j = 0; j < n; ++j) 
            if ((1<<j) & i) s += "1"; 
            else s += "0"; 
        ans.push_back(s); 

    }
    return ans; 
}
void solve()
{
    //freopen("input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    int n,m,k; 
    cin >> n >> m >> k; 
    const int N = 20; 
    int a[20][20]; 
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m + 1; ++j) cin >> a[i][j]; 
    int ans = 1e18; 
    vector<string> gen = create(n); 
    for (int i = 0; i < gen.size(); ++i) 
    {
        int cost = 0; 
        //knowlege 
        vector<int> know(m, 0); 
        for (int j = 0; j < gen[i].size(); ++j) if (gen[i][j] == '1') 
        {
            //doc cuon sach thu j 
            cost += a[j][0]; 
            for (int t = 1; t < m + 1; ++t) know[t-1] += a[j][t]; 
        }
        bool ok = true; 
        for (int t = 0; t < m; ++t) if (know[t] < k) {
            ok = false; 
            break; 
        }
        if (ok) ans = min(ans,cost); 
    }
    if (ans == 1e18) {
        cout<<"-1"; 
        return; 
    }
    cout << ans; 

}
signed main()
{
    solve(); 
}