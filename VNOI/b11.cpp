#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define       all(x)    x.begin(), x.end()
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9; 
void solve()
{
    //freopen("input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    string s; 
    getline(cin, s); 
    s += " "; 
    int cnt = 0; 
    string temp = ""; 
    for (int i = 0; i < s.size(); ++i) 
    {
        if (s[i] != ' ') temp += string(1,s[i]); 
        else {
            bool ok = true; 
            for (int j = 0; j < temp.size(); ++j) if (temp[j] >= '0' && temp[j] <= '9') {
                ok = false; 
                break; 
            }
            if (ok && temp.size() > 0) ++cnt; 
            temp = ""; 
        }
    }
    cout<<cnt<<endl; 
}
signed main()
{
    // fast;  
    solve(); 

}