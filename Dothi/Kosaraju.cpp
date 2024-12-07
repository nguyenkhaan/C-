/** 

 */
#include <bits/stdc++.h>
using namespace std; 
int color[1000]; 
vector<int> a[1000]; 
vector<int> ta[1000]; 
int n,m,d(0); 
stack<int> topo; 
void inp() 
{
    cin>>m>>n; 
    for (int i = 1; i <= m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        ta[y].push_back(x); 
    }
    memset(color,0,sizeof(color)); 
}
void dfs(int u, vector<int> (&a)[1000]) 
{
    color[u] = 1; 
    for (auto v : a[u]) 
    {
        if (color[v] == 0) dfs(v,a); 
    }
    topo.push(u); 
}
void korasaju(int u) 
{
    ++d; 
    dfs(u,ta); 
}
int main() 
{
    inp(); 
    for (int i = 1; i <= n; ++i) if (color[i] == 0) dfs(i,a); 
    memset(color,0,sizeof(color)); 
    while (!topo.empty()) 
    {
        int u = topo.top(); 
        if (color[u] == 0) korasaju(u); 
        topo.pop(); 
    }
    cout<<d; 
}
