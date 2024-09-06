//Chuyen doi danh sach canh thanh danh sach ke 
#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,m; 
    cin>>n>>m; 
    vector<vector<long>> a(n+1); 
    for (long i = 0; i<m; ++i) 
    {
        long x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
    for (long i = 1; i<=n; ++i) 
    {
        for (auto c:a[i]) cout<<c<<"  "; 
        cout<<endl; 
    }
}
int main() 
{
    solve(); 
}