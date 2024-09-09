#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n; 
    cin>>n; 
    vector<int> a(n);
    map<int,int> mp;  
    for (auto &i : a) {
        cin>>i; 
        mp[i]++; 
    } 
    int res = 0; 
    for (pair<int,int> x : mp) res = max(res,x.second); 
    cout<<n - res<<endl; 

}
int main() 
{
    int t; cin>>t;  
    while (t--) solve(); 
}