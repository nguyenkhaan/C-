#include <bits/stdc++.h>
using namespace std; 
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#pragma GCC optimize("O3") 
void solve() 
{
    int n,a,b; 
    cin >> n >> a >> b; 
    int ans = 0;
    for (int i = a; i <= n; ++i) if (i % a == 0 && i % b != 0) ans += i; 
    cout<<ans; 
}
int main() 
{
    solve(); 
}