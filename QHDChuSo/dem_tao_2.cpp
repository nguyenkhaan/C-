//f(inx, i)
#include <bits/stdc++.h>
using namespace std; 
#define int long long 
int f[16][16][2025][2][10]; 
int dp(int inx, int len, int sum , int flag, int last, string &x) 
{
    if (inx == x.size()) 
    {
        return sum; 
    }
    if (f[inx][len][sum][flag][last] != -1) 
    {
        return f[inx][len][sum][flag][last]; 
    }
    int up_bound = 9; 
    if (!flag) up_bound = x[inx] - '0'; 
    int ans = 0; 
    for (int j = 0; j <= up_bound; ++j) 
    {
        int _last = j; 
        int _len; 
        int _sum; 
        if (last == _last) 
        {
            _len = len + 1; 
            _sum = sum - last*(len*len) + _last*_len*_len;  
        }
        else 
        {
            _len = 1; 
            _sum = sum + _last*_len*_len; 
        }
        ans += dp(inx + 1, _len , _sum , j < up_bound || flag , _last, x); 
    }
    return f[inx][len][sum][flag][last] =  ans, ans; 
}
int calc(string x) 
{
    x = "H" + x; 
    memset(f, -1, sizeof(f));
    int ans = dp(1 , 1 , 0 , 0 , 0 , x); 
    return ans; 
}
signed main() 
{
        int l,r; 
        cin>>l>>r; 
        string _r = to_string(r); 
        string _l = to_string(l - 1); 
        cout<<calc(_r) - calc(_l); 
    
}