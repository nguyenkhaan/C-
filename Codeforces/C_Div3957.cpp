#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#define For(a,b,c) for(a = b; a <= c; ++a) 
void solve() 
{
    int n,m,k; 
    cin >> n >> m >> k; 
    vector<int> ans; 
    int i; 
    for (int i = n; i >= k; --i) ans.push_back(i); 
    for (int i = k - 1; i >= m + 1; --i) ans.push_back(i); 
    for (int i = 1; i <= m; ++i) ans.push_back(i); 
    for (auto x : ans) cout<<x<<" "; 

}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}