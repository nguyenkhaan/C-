#include <bits/stdc++.h>
using namespace std; 
#define int long long 
void solve() 
{
    int a,b; 
    cin >> a >> b; 
    if (a >= b) cout<<a<<"\n"; 
    else cout<<max(0*1ll , 1ll*(2*a - b))<<"\n"; 
}
signed main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}
