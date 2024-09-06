#include <bits/stdc++.h>
using namespace std; 
int n,m; 
vector<int> a[1000]; 
bool visited[1000]; 
int par[1000]; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i<=m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
    memset(visited,true,sizeof(visited)); 
}
bool bfs(int u) 
{
    queue<int> q; 
    q.push(u); 
    visited[u] = 0; 
    while (!q.empty()) 
    {
        int v = q.front(); 
        q.pop(); 
        for (auto x : a[v]) 
        {
            if (visited[x]) {
                par[x] = v; 
                q.push(x); 
            } 
            else if (x != par[v]) return true; 
        }
    }
    return false; 
}
int main() 
{
    
}