#include <bits/stdc++.h>
using namespace std; 
#define int long long 
int ans = 0;  
#define max_range 10000
int prime[max_range]; 
void sang_nguyen_to() 
{
    for (int i = 1; i <= max_range; ++i) prime[i] = 1; 
    for (int i = 2; i*i <= max_range; ++i) if (prime[i])
    {
        for (int j = i*i; j <= max_range; j += i) prime[j] = 0; 
    }
    prime[0] = 0; 
    prime[1] = 0; 
}
void dp(int inx, int lower, int sum, string &x) //1: can phai chay toi gia ... 
{
    if (inx == x.size())
    {
        if (prime[sum]) ++ans;
        return; 
    }
    int up_bound; 
    if (lower) up_bound = x[inx] - '0'; 
    else up_bound = 9; 
    for (int j = 0; j <= up_bound; ++j) 
    {
        int _inx = inx + 1; 
        int _sum = sum + j; 
        int _lower; 
        if (lower == 0) _lower = 0; 
        else 
        {
            if (j == up_bound) _lower = 1; 
            else _lower = 0; 
        }
        dp(_inx, _lower, _sum , x); 
    }
}
signed main()
{
    sang_nguyen_to(); 
    string l,r; 
    cin>>l>>r;
    string k = "20"; 
    dp(0 , 1 , 0 , k); 
    cout<<ans; 
    return 0; 
}