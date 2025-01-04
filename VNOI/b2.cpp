#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define       all(x)    x.begin(), x.end()
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9; 
int count(int a) 
{
    int d = 0; 
    if (a <= 0) d = 1; 
    a = abs(a); 
    while (a) {
        a /= 10; 
        d++; 
    }
    return d; 
}
void solve()
{
    //freopen("input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    int m,n; 
    cin >> m >> n; 
    const int N = 1003; 
    int a[N][N]; 
    for (int i = 0; i < m; ++i) 
        for (int j = 0; j < n; ++j) cin >> a[i][j]; 
    vector<int> space(n , 0); 
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) space[j] = max(space[j] , count(a[i][j])); 
    }
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) {
            //dau tien ta in dau cach truoc da 
            for (int t = 0; t < space[j] - count(a[i][j]); ++t) cout<<' '; 
            cout<<a[i][j]<<' '; 
        }
        cout<<endl; 
    }
}
signed main()
{
    // fast;
    solve(); 

}