#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n;  
    cin>>n; 
    vector<pair<long,long>> a(n+2); 
    for (int i = 1; i<=n; i++) 
    {
        cin>>a[i].first>>a[i].second; 
    }
    for (int i = 1; i<=n; i++) 
    {
        if (a[i].first % a[i].second == 0) cout<<a[i].first / a[i].second<<endl; 
        else cout<<"-1"<<endl; 
    }
}
int main() 
{
    solve(); 
}