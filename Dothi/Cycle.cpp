#include <bits/stdc++.h>
using namespace std; 
int par[1000]; 
vector<int> a[1000]; 
bool visited[1000]; 
int n,m; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i<=m; ++i) 
    {
        int x,y; cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
    memset(visited,true,sizeof(visited)); 
}
bool dfs(int u) 
{
    visited[u] = 0; 
    for(auto x : a[u]) 
    {
        if (visited[x]) {
            par[x] = u; 
            if (dfs(x)) return true; 
        }
        else if (x != par[u]) return true; 
    }
    return false; 
}
int main() 
{
    inp(); 
    for (int i = 1; i<=n; ++i) if (visited[i]) {
        if (dfs(i)) {
            cout<<"yes"; 
            return 0; 
        }
    }
    cout<<"no"; 
}