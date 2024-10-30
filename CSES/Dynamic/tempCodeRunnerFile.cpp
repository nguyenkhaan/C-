#include <bits/stdc++.h>
using namespace std; 
#define MOD 1000000007
void solve() 
{
    int n; 
    cin>>n; 
    vector<int> dp(n + 1); 
    dp[0] = 1; 
    dp[1] = 1; 
    for (int i = 2; i <= n; ++i) 
    {
        int d = 0; 
        for (int j = 1; j <= 6; ++j) {
            if (i >= j) d += (dp[i - j] % MOD);  
        }
        dp[i] = (d % MOD); 
    }
    cout<<dp[n]; 
}
int main() 
{
    solve(); 
}