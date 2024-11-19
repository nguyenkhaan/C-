#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#define int long long 
const int maxN = 102; 
const int INF = 1LL<<60;  
struct matrix {
    int n; 
    int x[maxN][maxN]; 
    void setter() 
    {
        for (int i = 0; i < maxN; ++i) 
            for (int j = 0; j < maxN; ++j) x[i][j] = INF; 
    }
}; 
matrix a; 
int m, n, k; 
void inp() {
    cin >> n >> m >> k; 
    a.n = n;  
    a.setter(); 
    for (int i = 0; i < m; ++i) {
        int x, y, w; 
        cin >> x >> y >> w; 
        x--; 
        y--; 
        a.x[x][y] = min(a.x[x][y] , w); 
    } 
} 
matrix operator *(const matrix &a, const matrix &b) {
    matrix c; 
    c.n = a.n; 
    c.setter(); 
    for (int i = 0; i < a.n; ++i) {
        for (int j = 0; j < b.n; ++j) {
            for (int t = 0; t < a.n; ++t) 
                c.x[i][j] = min(c.x[i][j], a.x[i][t] + b.x[t][j]); 
        }
    }
    return c; 
}
matrix Pow(matrix &a, int n) { 
    matrix res; 
    res.n = a.n; 
    int f = 0; 
    while (n) {
        if (n & 1) {
            if (f) res = res * a; 
            else res = a , f = 1; 
        }
        a = a * a; 
        n >> 1;  
    }
    return res; 
}
signed main() {
    inp(); 
    #ifdef LOCAL 
    //This is the perfect code 
    #endif 
    matrix c = Pow(a, k); 
    if (c.x[0][n - 1] >= INF) cout<<"-1";  
    else cout<<(c.x[0][n-1]);
}
