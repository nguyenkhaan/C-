#include <bits/stdc++.h>
using namespace std; 
vector<int> a[1000]; 
bool visited[1000]; 
void inp() 
{
    int n,m; 
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
    cout<<u<<" "; 
    visited[u] = false; //da tien hanh tham roi 
    while (!q.empty()) 
    {
        //lay cai dau hang doi 
        int v = q.front(); 
        q.pop(); 
        cout<<v<<" "; 
        for (auto x : a[v]) 
        {
            if (visited[x]) 
            {
                q.push(x); 
                visited[x] = false; 
            }
        }
    }
}
int main() 
{
    memset(visited,true,sizeof(visited)); 
    inp(); 
    bfs(1); 
}