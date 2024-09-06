#include <bits/stdc++.h>
using namespace std; 
bool visited[1000][1000]; 
int n,m; 
char a[1001][1001];
int di[4] = {1,0,0,-1};
int dj[4] = {0,-1,1,0};
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i<=n; ++i) {
        for (int j = 1; j<=m; ++j) cin>>a[i][j]; 
    }
}
void dfs(int i, int j) 
{
    visited[i][j] = true; //danh dau la duoc tham roi 
    for (int k = 0; k<4; ++k) 
    {
        int i1 = i + di[k]; 
        int j1 = j + dj[k]; 
        if (i1>=1 && i1<=n && j1>=1 && j1<=m && !visited[i1][j1] && a[i1][j1] == 'x')
            dfs(i1,j1); 
    }
}
int connect() 
{
    int cnt = 0; 
    for (int i = 1; i<=n; ++i) 
    {
        for (int j = 1; j<=m; ++j) if (visited[i][j] == false && a[i][j] == 'x') {
            ++cnt; 
            dfs(i,j); 
        }
    }
    return cnt; 
}
int main() 
{
    inp(); 
    for (int i = 0; i<=n+1; ++i) 
    {
        for (int j = 0; j<=m+1; ++j) visited[i][j] = false; 
    }
    cout<<connect(); 
}