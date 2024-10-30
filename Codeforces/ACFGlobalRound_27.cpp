#include <bits/stdc++.h>
using namespace std; 
#define int long long 
void solve() 
{
    int m,n,r,c; 
    cin >> n >> m >> r >> c; 
    cout<<(m*(n -r) + m*n - (r-1)*m - c - n + r)<<endl; 
}
signed main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}