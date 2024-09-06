//Tim duong di ngan nhat giua 2 diem tren luoi 
//Ta tien hanh su ung thuat toan BFS de xay dung 
#include <bits/stdc++.h>
using namespace std; 
int n,m,x1,y11; 
int d[100][100]; 
char a[100][100]; 
int di[4] = {1,0,0,-1};  
int dj[4] = {0,1,-1,0}; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i<=n; ++i) 
    {
        for (int j = 1; j<=m; ++j) {
            cin>>a[i][j]; 
            if (a[i][j] == 'A') {
                x1 = i; 
                y11 = j; 
            }
        }
    }
    memset(d,0,sizeof(d)); 
}
int bfs(int i, int j) 
{
    queue<pair<int,int>> q; 
    q.push({i,j}); 
    while (!q.empty()) 
    {
        pair<int,int> v = q.front(); 
        q.pop(); 
        for (int k = 0; k<4; ++k) 
        {
            int i1 = v.first + di[k]; 
            int j1 = v.second + dj[k]; 
            if (i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]!='x') {
                q.push({i1,j1}); 
                d[i1][j1] = d[v.first][v.second] + 1; 
                if (a[i1][j1] == 'B') return d[i1][j1]; 
            }
        }
    }
    return 0; 
}
int main() 
{
    inp(); 
    cout<<bfs(x1,y11); 
}