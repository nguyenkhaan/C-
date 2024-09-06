#include <bits/stdc++.h>
using namespace std; 
bool visited[1001]; 
vector<long> a[1001]; 
int n,m; 
void inp() {
    cin>>n>>m; 
    for (long i = 0; i<m; ++i) {
        int x,y; cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
}
void dfs(int u) 
{
    cout<<u<<"  "; 
    visited[u] = true; 
    for (auto x:a[u]) if (!visited[x]) dfs(x); 
}
void bfs(int u) 
{
    queue<long> q; 
    q.push(u); 
    visited[u] = true; 
    while (!q.empty()) 
    {
        int v = q.front(); 
        q.pop(); 
        cout<<v<<"  "; 
        for (auto x:a[v]) if (!visited[x]) {
            q.push(x); 
            visited[x] = true; 
        }
    }
}
int main() 
{
    inp(); 
    memset(visited,false,sizeof(visited)); 
    dfs(1); 
    memset(visited,false,sizeof(visited)); 
    bfs(1); 
}