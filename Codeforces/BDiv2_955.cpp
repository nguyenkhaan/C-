#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long long x,y,k; 
    cin>>x>>y>>k;
    while (k > 0 && x!=1) 
    {
        long long m = ((x + y - 1) / y)*y - x;
        m = max(1ll,m); 
        m = min(m, k); 
        x += m; 
        while (x % y == 0) x /= y; 
        k -= m; 

    }
    cout<<x + k %(y - 1)<<endl;  
}
int main() 
{
    long long t; cin>>t; 
    while (t--) solve(); 
}