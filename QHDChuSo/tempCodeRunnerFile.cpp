#include <bits/stdc++.h>
using namespace std; 
#define int long long 
const int maxn = 1e18; 
int f[19][13126][2]; 
int dp(int inx, int sum, int flag, string &x) 
{
    if (inx == x.size()) {
        string temp = to_string(sum); 
        if (temp == x) cout<<temp<<endl; 
        return temp == x; 
    }
    if (f[inx][sum][flag] != -1) return f[inx][sum][flag]; 
    int up_bound = 9; 
    if (!flag) up_bound = x[inx] - '0'; 
    int ans = 0; 
    for (int j = 0; j <= up_bound; ++j) 
    {
        int _last = j; 
        int _sum = sum + j*j*j; 
        ans += dp(inx + 1, _sum, j < up_bound || flag, x); 
    }
    return f[inx][sum][flag] = ans, ans; 
}
int calc(string x) 
{
    x = "H" + x; 
    memset(f,-1,sizeof(f)); 
    int ans = dp(1,0,0,x); 
    return ans; 
}
signed main() 
{
    int l,r; 
    cin >> l >> r; 
    string _l = to_string(l-1); 
    string _r = to_string(r); 
    cout<<calc(_r) - calc(_l); 
}