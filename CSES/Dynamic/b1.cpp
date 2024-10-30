#include <bits/stdc++.h>
using namespace std; 
#define MOD 1000000007
void solve() 
{
    long long n; 
    cin>>n; 
    vector<long long> dp(n + 1); 
    dp[0] = 1; 
    dp[1] = 1; 
    for (long long i = 2; i <= n; ++i) 
    {
        long long d = 0; 
        for (long long j = 1; j <= 6; ++j) {
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