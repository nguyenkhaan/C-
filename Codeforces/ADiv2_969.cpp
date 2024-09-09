#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int l,r; 
    cin>>l>>r; 
    int res = 0; 
    if (l % 2 == 0 && r % 2 == 0) res = (r - l)/2; 
    else res = (r - l)/2 + 1; 
    cout<<(res / 2)<<endl; 
}
int main() 
{
    int t; 
    cin>>t; 
    while (t--) solve(); 
}