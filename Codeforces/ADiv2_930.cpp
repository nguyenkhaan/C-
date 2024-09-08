#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long long n; 
    cin>>n; 
    long long res = (long long)log2(n); 
    cout<<(1<<res)<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}