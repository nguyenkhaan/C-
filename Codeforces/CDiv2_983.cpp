#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimzie("inline-functions") 
#pragma GCC optimize("O2") 
#define int long long 
#define all(a) a.begin(),a.end() 
#define For(a,b,c) for(a = b; a < c; ++a) 
void solve() 
{
    int n; 
    cin >> n; 
    int ans = n - 2; //Dap an lon nhat co the ton tai 
    vector<int> a(n);
    int i; 
    For(i,0,n) cin >> a[i]; 
    sort(all(a)); 
    int l = 0; 
    for (int r = 0; r < n; ++r) 
    {
        bool flag = 0; 
        while (r - l >= 2 && a[l] + a[l+1] <= a[r]) ++l; 
        ans = min(ans , n - (r - l + 1)); 
    }
    cout<<ans<<endl; 
}
signed main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}