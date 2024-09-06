#include <bits/stdc++.h>
using namespace std; 
char a[100][100]; //x: khong co duong di, o: co duong di 
int di[4] = {1,0,0,-1};
int dj[4] = {0,-1,1,0};
int x1,y11; 
int x2,y2;
int n,m;  
void inp()
{
    cin>>n>>m; 
    for (int i = 1; i<=n; ++i) 
    {
        for (int j = 1; j<=m; ++j) {
            cin>>a[i][j]; 
            if (a[i][j] == 'A') {
                x1 = i; y11 = j; 
            }
            if (a[i][j] == 'B') {
                x2 = i; y2 = j; 
            }
        } 
    }
}
bool dfs(int i, int j) 
{
    if (a[i][j] == 'B') return true; 
    a[i][j] = 'x'; //danh dau da tham roi 
    for (int k = 0; k<4; ++k) 
    {
        int i1 = i + di[k]; 
        int j1 = j + dj[k]; 
        if (i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]!='x')
        {
            if (dfs(i1,j1)) return true; 
        }
    }
    return false; 
}
int main() 
{
    inp(); 
    if (dfs(x1,y11)) cout<<"yes"; 
    else cout<<"no";
}