#include <bits/stdc++.h>
using namespace std; 
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
}
void bfs(int u) 
{
    queue<int> q; 
    q.push(u); 
    visited[u] = false; //danh dau da tham roi 
    while (!q.empty())
    {
        int v = q.front(); 
        q.pop(); 
        visited[v] = false; //danh dau da tham roi 
        for (auto x : a[v]) if (visited[x]) q.push(x); 
    }
}
int connect() 
{
    int cnt = 0; 
    for (int i = 1; i<=n; ++i) 
    {
        if (visited[i]) {
            ++cnt; 
            bfs(i); 
        }
    }
    return cnt; 
}
int main() 
{
    memset(visited,true,sizeof(visited)); 
    inp(); 
    cout<<connect(); 
}