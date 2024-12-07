#include <bits/stdc++.h>
using namespace std; 
#define int unsigned long long 
bool prime(int n) 
{
    if (n < 2 ) return false; 
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false; 
    return true; 
}
void solve() 
{
    vector<int> a; 
    for (int i = 2; i <= 31; ++i) 
    {
        if (prime(i) && prime((1<<i) - 1)) {
            int t = ((1<<i) - 1) * (1<<(i-1)); 
            a.push_back(t); 
        }
    } 
    for (auto z : a) cout<<z<<" "; 
}
signed main() 
{
    solve(); 
}