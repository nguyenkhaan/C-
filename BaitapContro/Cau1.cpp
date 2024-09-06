#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n; cin>>n; 
    vector<long> a(n+2); 
    vector<long> pre(n+2,0); 
    long sum(0),res(0); 
    pre[0] = 0; 
    for (long i = 1; i<=n; ++i) 
    {
        cin>>a[i]; 
        sum += a[i];
        pre[i] = a[i] + pre[i-1];
    } 
    for (long i = 1; i<=n; ++i) res += a[i] * (pre[n] - pre[i]); 
    cout<<res; 

}
int main() 
{
    solve(); 
}