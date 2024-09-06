#include <bits/stdc++.h>
// 9 9
// 1 2
// 1 3
// 1 5
// 2 4
// 3 6
// 3 7
// 3 9
// 5 8
// 8 9
using namespace std; 
vector<int> a[1000]; 
bool visited[1000]; 
void inp() 
{
    int n,m; 
    cin>>n>>m; 
    for (int i = 1; i<=m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
}
void dfs(int u) 
{
    if (visited[u]) {
        cout<<u<<"  "; 
        visited[u] = false; //da duoc tham roi 
    }
    for (auto x:a[u]) 
    {
        if (visited[x]) dfs(x); 
    }
}
int main() 
{
    memset(visited,true,sizeof(visited)); 
    inp(); 
    dfs(1); 
}