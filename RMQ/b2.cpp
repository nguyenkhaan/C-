#include <bits/stdc++.h>
using namespace std; 
#define int long long 
void solve() 
{
    int n; 
    cin >> n; 
    vector<int> a(n + 1); 
    vector<int> p(n + 1); 
    for (int i = 1; i <= n; ++i) cin >> a[i]; 
    p[1] = a[1]; 
    for (int i = 2; i <= n; ++i) p[i] = __gcd(a[i],p[i-1]); 
    vector<int> s(n + 1); 
    s[n] = a[n]; 
    int ans = 0; 
    int idx = -1; 
    int cnt = 2; 
    for (int i = n - 1; i >= 1; --i) {
        s[i] = __gcd(s[i+1],a[i]); 
    }
    for (int i = 2; i <= n - 1; ++i) 
    {
        int gcd = __gcd(p[i-1] , s[i + 1]); 
        if (ans < gcd) {
            ans = gcd; 
            idx = i;  
        }
    }
    if (ans <= s[2]) { //xoa phan tu thu 1 
        ans = s[2]; 
        idx = 1; 
    }
    if (ans < p[n-1]) { //xoa phan tu thu n
        ans = p[n-1]; 
        idx = n;  
    }
    cout<<idx<<" "<<ans; 
    
}
signed main() 
{
    solve(); 
}