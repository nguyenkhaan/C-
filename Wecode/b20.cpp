#include <bits/stdc++.h>
using namespace std; 
const int maxN = 105; 
void solve() 
{
    double a[maxN][maxN]; 
    int m,n; 
    cin >> m >> n; 
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cin >> a[i][j]; \
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) cout<<a[i][j]<<' '; 
        cout<<endl; 
    }
}
int main() 
{
    solve(); 
}