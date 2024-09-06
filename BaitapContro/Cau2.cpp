#include <bits/stdc++.h>
using namespace std; 
vector<pair<int,int>> uoc_u;  
vector<pair<int,int>> uoc_v; 
vector<pair<int,int>> uoc(int n) 
{
    vector<pair<int,int>> x; 
    for (long i = 1; i*i<=n; ++i) if (n % i == 0) 
    {
        x.push_back(make_pair(i,n/i)); 
    }
    return x; 
}
void solve() 
{
    int n; 
    cin>>n; 
    for (int u = 0; u<=n/2; ++u) 
    {
        int v = n - u; 
        uoc_u = uoc(u); 
        uoc_v = uoc(v); 
        for (auto c: uoc_u) 
        {
            for (auto x: uoc_v) 
            if (x.first!=x.second && c.first!=c.second && x.first!=c.first && x.first!=c.second && x.second!=c.first && x.second!=c.second)
            {
                cout<<c.first<<"  "<<c.second<<"  "<<x.first<<"   "<<x.second<<endl; 
            }
        }
    }
}
int main() 
{
    solve();
}