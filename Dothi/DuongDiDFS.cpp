//Nhap vao hai dinh beg va fin, kiem tra xem co duong di giua hai dinh khong 
#include <bits/stdc++.h>
using namespace std; 
vector<int> a[1000]; 
int n,beg,fin,m; 
bool visited[1000]; 
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
bool dfs(int u) 
{
    if (u == fin) return true; 
    visited[u] = false //danh dau da tham roi 
    for (auto x : a[u]) if (visited[x])
    {
        if (dfs(x)) return true; 
    }
    return false; 
}
int main() 
{
    memset(visited,true,sizeof(visited)); 
    inp(); 
    cin>>beg>>fin; 
    cout<<dfs(beg); 
}