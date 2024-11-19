#include <bits/stdc++.h>
using namespace std; 
const int maxN = 1e5;  
vector<int> adj[maxN]; 
int m,n; 
int color[maxN]; 
void inp() 
{
    cin >> n >> m; 
    for (int i = 0; i < m; ++i) 
    {
        int x,y;  
        cin >> x >> y; 
        adj[x].push_back(y); 
    }
    memset(color,sizeof(color),0); 
}
void dfs(int u) 
{
    color[u] = 1; 
    for (auto x : adj[u]) dfs(x); 
    color[u] = 2; 
}
int main() 
{
    
}