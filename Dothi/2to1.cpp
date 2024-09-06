//Chuyen tu danh sach canh sang ma tran ke 
#include <bits/stdc++.h>
#define maxRange 100
using namespace std; 
void solve() 
{
    long n,m; 
    cin>>n>>m; 
    int a[maxRange][maxRange]; 
    for (long i = 0; i<=(n+1); ++i) {
        for (long j = 0; j<=(n+1); ++j) a[i][j] = 0; 
    }
    for (long i = 0; i<m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x][y] = 1; 
        a[y][x] = 1; 
    }
    for (long i = 1; i<=n; ++i) 
    {
        for (long j = 1; j<=n; ++j) cout<<a[i][j]<<"  "; 
        cout<<endl; 
    }
}
int main() {
    solve(); 
}