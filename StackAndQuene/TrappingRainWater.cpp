#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimization("O2") 
#define int long long 
#define For(a,b,c) for(a = b; a <= c; ++a) 
void solve() 
{
    int n,i; 
    cin >> n; 
    vector<int> a(n + 1); 
    For(i,0,n-1) cin >> a[i]; 
    int ans = 0; 
    vector<int> left_max(n + 1); 
    vector<int> right_max(n + 1);
    left_max[0] = a[0]; 
    For(i,1,n-1) left_max[i] = max(a[i] , left_max[i-1]); 
    right_max[n-1] = a[n-1]; 
    for (int i = n-2; i >= 0; --i) right_max[i] = max(a[i] , right_max[i+1]);
    For(i,0,n-1) ans += max(0ll, min(left_max[i] , right_max[i]) - a[i]);  
}
signed main() 
{
    solve(); 
}