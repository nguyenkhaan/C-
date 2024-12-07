#include <bits/stdc++.h>
using namespace std; 
const int maxn = 1000; 
int m,n; 
char a[maxn][maxn]; 
int x[4] = {0,0,1,-1}; 
int y[4] = {1,-1,0,0}; 
int d[maxn][maxn]; 
void inp() 
{
    cin >> m >> n;  
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j <= n; ++j) cin >> a[i][j]; 
    }
}
void bfs(int i, int j) 
{
    queue<pair<int,int>> q; 
    q.push({i,j}); 
    d[i][j] = 0; 
    a[i][j] = 'x'; 
    while (!q.empty()) 
    {
        pair<int,int> v = q.front(); 
        q.pop(); 
        for (int k = 0; k < 4; ++k) 
        {
            int i1 = x[k] + v.first; 
            int j1 = y[k] + v.second; 
            if (i1 >= 1 && i1 <= m && j1 >= 1 && j1 <= n && a[i1][j1] != 'x')
            {
                q.push({i1,j1}); 
                d[i1][j1] = d[v.first][v.second] + 1; 
                a[i1][j1] = 'x'; 
            }
        }
    }
}
int main() 
{
    inp(); 
    bfs(1,1); 
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) cout<<d[i][j]<<" "; 
        cout<<endl;
    }
}