#include <bits/stdc++.h>
using namespace std; 
void solve() 
{ //hieu sai de 
    int n,q; 
    cin>>n>>q; 
    vector<int> a(n+1); 
    for (int i = 0; i<n; ++i) cin>>a[i]; 
    vector<int> d(n+1); 
    d[0] = a[0]; 
    d[n] = 0; 
    for (int i = 1; i<n; ++i) d[i] = a[i] - a[i-1]; 
    for (int i = 0; i<q; ++i) 
    {
        char ch; 
        int s,e; 
        cin>>ch>>s>>e; 
        if (ch == '+') {
            d[s-1]++; 
            d[e]--; 
        } else
        {
            d[s-1]--; 
            d[e]++; 
        } 
    }
    a[0] = d[0]; 
    for (int i = 1; i<n; ++i) a[i] = a[i-1] + d[i]; 
    for (int i = 0; i<n; ++i) cout<<a[i]<<" "; 
    cout<<endl; 
}
int main() 
{
    solve(); 
}