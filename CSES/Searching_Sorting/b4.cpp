#include <bits/stdc++.h> 
using namespace std; 
#pragma GCC optimize("O2") 
#pragma GCC optimize("inline-functions") 
#pragma GCC optimize("fast-math") 
#define int long long
#define For(a,b,c) for(a = b; a <= c; ++a)
#define all(a) a.begin(),a.end() 
int m,n; 
void solve() 
{
    cin >> n >> m; 
    vector<int> a(n); 
    vector<int> b(m); 
    int i; 
    For(i,0,n-1) cin >> a[i]; 
    multiset<int> s(all(a)); 
    For(i,0,m-1) cin >> b[i]; 
    for (int i = 0; i < m; ++i) {
        if (s.size() > 0) 
        {
            int x = b[i]; 
            auto ite = s.upper_bound(x); 
            if (ite == s.begin() || s.size() == 0) cout<<"-1 \n"; 
            else 
            {
                ite--; 
                cout<<(*ite)<<endl; 
                s.erase(ite);
            }
        }
        else cout<<"-1 \n"; 
    }
}
signed main() 
{
    solve();
}