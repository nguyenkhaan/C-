#include <bits/stdc++.h>
using namespace std; 
/*
f(i): đáp án từ 1 tới i 
-> f(b) - f(a - 1); 
Xây dựng các chữ số 
0  1  2  3  4  5  6  7  8  9

*/
#define int long long 
#define endl "\n"
int dp(int pos, int lower, int sum, string &x) 
{
    if (pos == x.size()) {
        if (prime[sum] == true) return 1; 
        return 0; 
    }
    int fin; 
    int ans = 0; 
    if (lower == 1) fin = x[pos + 1] - '0'; 
    else fin = 9; 
    for (int i = 0; i <= fin; ++i) 
    {
        int _pos = pos + 1; 
        int _sum = sum + i; 
        int _lower; 
        if (lower == 0) _lower = 0; 
        else 
        {
            if (i == fin) _lower = 1; 
            else _lower = 0; 
        }
        ans += dp(_pos , _lower , _sum , x); 
    }
    return ans; 
}
int f(string x) {
    x = "H" + x; 
    //dem xem co ba nhieu thang thoa man tu 1...x 
    return dp(0,1,0,x); 
}
signed main() 
{
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0); 
    string l,r; 
    cin>>l>>r; 
    cout<<f(r); 

}