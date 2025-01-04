#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define       all(x)    x.begin(), x.end()
#pragma GCC optimize("O2") 
#pragma GCC 
void solve()
{
    //freopen("input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    string s; 
    cin >> s; 
    string t; 
    cin >> t; 
    if (s.size() != t.size()) {
        cout<<max(s.size() , t.size()); 
        return; 
    }
    else {
        int pos = 0; 
        while (s[pos] == t[pos] && pos < s.size()) ++pos; 
        cout << s.size() - pos; 
    }
}
signed main()
{
    fast;
    solve(); 
}