#include <bits/stdc++.h>
using namespace std; 
//Xem thang nao duoc duyet xong dau tien thi dua vao topo
bool visited[1000]; 
vector<int> a[1000]; 
vector<int> topo; 
int n,m; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i<=n; ++i) {
        int x,y; cin>>x>>y; 
        a[x].push_back(y); 
    }
    memset(visited,false,sizeof(visited)); 
} 
void dfs(int u) 
{
    visited[u] = true; //danh dau da tham roi 
    for (auto x : a[u]) if (!visited[x])
    {
        dfs(x); 
    }
    topo.push_back(u); 
}
int main() 
{
    inp(); 
    for (int i = 1; i<=n; ++i) if (!visited[i]) dfs(i); 
    topo.reverse(topo.begin(),topo.end()); 
    for (auto x : topo) cout<<x<<" "; 
}