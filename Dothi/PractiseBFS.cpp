#include <bits/stdc++.h>
using namespace std; 
const int maxN = 1000; 
vector<int> adj[maxN]; 
int m,n; 
bool visited[maxN]; 
void inp() 
{
    cin >> m >> n; 
    memset(visited,0,sizeof(visited)); 
    for (int i = 0; i < n; ++i) {
        int x,y; 
        cin >> x >> y; 
        adj[x].push_back(y); 
        adj[y].push_back(x); 
    }
}
void bfs(int u) 
{
    queue<int> q; 
    q.push(u); 
    cout<<u<<" "; 
    visited[u] = true; //danh dau da tham u roi 
    while (!q.empty()) 
    {
        int v = q.front(); 
        q.pop(); 
        cout<<v; 
        for (auto x : adj[v]) {
            if (!visited[x]) q.push(x); 
            visited[x] = true; 
        }
    }
}
int main() 
{
    inp(); 
    bfs(1); 
}