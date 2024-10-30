#include <bits/stdc++.h>
using namespace std; 
int n,m; 
bool visited[1000]; 
vector<int> a[1000]; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i <=m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
    memset(visited,true,sizeof(visited)); 
}
bool dfs(int u, int par) 
{
    visited[u] = false; 
    for (auto x : a[u]) 
    {
        if (visited[x])  
        {
            if (dfs(x,u)) return true; 
        } else if (x != par) return true; 
    }
    return false; 
}
int main() 
{
    inp();  
    int d = 0; 
    for (int i = 1; i <=n; ++i) if (visited[i]) {
        if (dfs(i,0)) ++d; 
    } 
    cout<<d;  
}