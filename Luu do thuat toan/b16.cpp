//code lai thuat toan ds 
#include <bits/stdc++.h>
using namespace std; 
vector<int> a[1000]; 
bool visited[1000]; 
int n,m; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i <= m; ++i) {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
    }
    memset(visited,true,sizeof(visited)); 
}
void dfs(int u) 
{
    cout<<u<<" "; 
    visited[u] = false; 
    for (auto x : a[u]) 
    {
        if (visited[x]) dfs(x); 
    } 
}
int main() 
{
    inp(); 
    dfs(1); 
}