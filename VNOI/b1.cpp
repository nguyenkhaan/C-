#include <bits/stdc++.h>
using namespace std; 
const int N = 800; 
bool check(double a[][N], int &n) 
{
    for (int i = 0; i < n; ++i) if (a[i][i] != 1) return false; 
    int col = -1; 
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) if (j > i && a[i][j] != 0) return false; 
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) if (j < i && a[i][j] != 0) 
        {
            if (col == -1) col = j; 
            else if (col == j) continue; 
            else return false; 
        }
    }
    return true; 
}
void solve() 
{
    int m,n; 
    cin >> m >> n; 
    double a[N][N]; 
    for (int i = 0; i < n; ++i)  
        for (int j = 0; j < n; ++j) cin >> a[i][j]; 
    if (check(a,n)) cout<<"Yes"; 
    else cout<<"No"; 
} 
signed main() 
{
    solve(); 
}