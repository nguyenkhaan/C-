#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,x; 
    cin>>n>>x; 
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) cin>>a[i]; 
    vector<int> dp(x + 1); 
    dp[0] = 0; 
    for (int i = 1; i <= x; ++i) 
    {
        bool isOK = 0; 
        int d = INT_MAX; 
        for (int j = 0; j < n; ++j) if (i - a[j] >= 0)
        {
            if ((dp[i - a[j]] == 0) && (i - a[j] > 0)) {} 
            else {
                isOK = 1; 
                d = min(dp[i - a[j]] , d); 
            }
        }
        if (isOK) dp[i] = d + 1; 
        else dp[i] = 0; 
    }
    if (dp[x]) cout<<dp[x]; 
    else cout<<"-1"; 
}
int main() 
{
    solve(); 
}