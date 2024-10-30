//Su dung quy hoach dong kieu lua chon 
#include <bits/stdc++.h>
using namespace std; 
#define fast ios::sync_with_stdio(false), cin.tie(0)
const int limN = 45; 
const int limM = 1e6 + 5; 
int n,m,a[limN]; 
int dp[limN][limM]; 
void solve() 
{
    cin>>n>>m; 
    for (int i = 1; i <= n; ++i) cin>>a[i]; 
    dp[0][0] = 1; 
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j)  { //Thuc hien vong lap thong minh nen khong luong khong bao gio vuot qua M 
            //Chuyen sang vi tri i + 1 
            //dang dung tai vi tri i va co khoi luong la j 
            //Chon, khong chon 
            dp[i + 1][j + a[i + 1]] += dp[i][j]; 
            //Khong chon cuc vang i + 1 
            dp[i+1][j] += dp[i][j]; 
        }
    }
    long long ans = 0; 
    for (int j = 0; j <= m; ++j) ans += (1ll*dp[n][j]); 
    cout<<ans<<endl; 
}
int main() 
{
    fast; 
    solve(); 
}