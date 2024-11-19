#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3"); 
#define int long long 
void solve() 
{
    int n; 
    cin >> n; 
    n /= 1e4; 
    int money[5] = {2,5,10,20,50}; 
    const int INF = 1e4; 
    vector<pair<int,int>> dp(n + 1 , {0,INF}); 
    dp[0] = {1,0}; 
    for (int i = 0; i < 5; ++i) 
    {
        for (int j = money[i]; j <= n; ++j) {
            dp[j].first += dp[j - money[i]].first; 
            dp[j].second = min(dp[j].second , 1 + dp[j-money[i]].second); 
        } 
    }
    cout<<dp[n].first<<" "<<dp[n].second; 
}
signed main() 
{
    solve(); 
}