#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#define int long long
const int maxN = 1e5 + 5; 
void solve() 
{
    int money[5] = {2, 5, 10, 20, 50}; 
    int n; 
    cin >> n;
    vector<int> dp(n + 1, 0); 
    dp[0] = 1;
    for (int j = 0; j < 5; ++j) {  
        for (int i = money[j]; i <= n; ++i) {  
            dp[i] += dp[i - money[j]];
        }
    }
    cout << dp[n]; 
}

signed main() 
{
    solve();
}
