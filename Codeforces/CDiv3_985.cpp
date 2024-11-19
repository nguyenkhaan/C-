#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#pragma GCC optimize("O3") 
const int maxN = 1e5 + 3; 
int msp[maxN]; 
void sang(int n) 
{
    for (int i = 0; i <= n + 2; ++i) msp[i] = 1; 
    for (int i = 2; i <= n + 2; ++i) if (msp[i] == 1) 
    {
        for (int j = i; j <= n + 2; ++j) if (msp[j] == 1) msp[j] = i; 
    }
}
void solve() 
{
    int n; 
    cin >> n;  
    sang(n); 
    vector<int> res; 
    while (n != 1) {
        res.push_back(msp[n]); 
        n /= msp[n]; 
    }
    for (auto x : res) cout<<x<<" "; 
}
signed main() 
{
    solve(); 
}