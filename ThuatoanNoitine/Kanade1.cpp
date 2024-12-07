#include <bits/stdc++.h>
using namespace std; 
#define int long long 
const int maxN = 1e4;  
void solve()  
{
    int n; 
    cin >> n; 
    if (n <= 2) return; 
    vector<int> a(n); 
    vector<int> f(n); 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    f[1] = 2; 
    f[0] = 2; 
    int d = a[1] - a[0];  
    int ma = 0; 
    for (int i = 2; i < n; ++i) 
    {
        int t = a[i] - a[i-1]; 
        if (t == d) f[i] = f[i-1] + 1;
        else {
            d = t; 
            f[i] = 2; 
        }
    }
    ma = *max_element(f.begin() , f.end()); 
    if (ma <= 2) return; 
    for (int i = n - 1; i >= 0; --i) if (f[i] == ma) {
        cout<<i - ma + 1<<" "<<i; 
        return; 
    }
}
signed main() 
{
    solve(); 
}

