#include <bits/stdc++.h>
/*
1 3 4 5
1 2 3 4
4 4 4 4
4 4 4 4
*/
using namespace std; 
#define maxN 505  
#define int long long 
#define For(a,b,c) for(a = b; a <= c; ++a)
void solve() 
{
    int a[maxN][maxN]; 
    int n; 
    cin >> n; 
    int i,j,d; 
    For(i,1,n) 
        For(j,1,n) cin >> a[i][j];  
    int ans = 0; 
    const int _com = LLONG_MAX; 
    For(i,1,n - 1) 
    {
        d = _com; 
        int _i = n - i + 1; 
        For(j,1,i) 
        {
            if (a[_i][j] < 0) d = min(d , a[_i][j]); 
            _i++; 
        } 
        if (d < 0) ans += d; 
    } 
    d = _com; 
    For(i,1,n) if (a[i][i] < 0) d = min(d,a[i][i]); 
    if (d < 0) ans += d; 
    For(i,1,n-1) 
    {
        int _i = i; 
        d = _com; 
        for (j = n; j >= n - i + 1; --j) 
        {
            if (a[_i][j] < 0) d = min(d,a[_i][j]); 
            _i--; 
        }
        if (d < 0) ans += d; 
    }
    cout<<ans*-1<<endl; 
}
signed main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}