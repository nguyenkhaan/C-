#include <bits/stdc++.h>
using namespace std; 
const int maxN = 20; 
struct matrix 
{
    int m,n; 
    int x[maxN][maxN]; 
    void inp() 
    {
        for (int i = 0; i < m; ++i) 
            for (int j = 0; j < n; ++j) cin >> x[i][j]; 
    }
}; 
matrix a; 
matrix b; 
void inp() 
{
    cin>>a.m>>a.n; 
    cin>>b.m>>b.n; 
    a.inp(); 
    b.inp(); 
}
matrix operator *(matrix &a, matrix &b) 
{
    matrix ans; 
    ans.m = a.m; 
    ans.n = b.n;  
    for (int i = 0; i < a.m; ++i) 
    {
        for (int j = 0; j < b.n; ++j) {
            for (int k = 0; k < a.n; ++k) ans.x[i][j] += (a.x[i][k] * b.x[k][j]); 
        }
    }
    return ans; 
}
int main() 
{
    inp(); 
    matrix ans = a * b; 
    for (int i = 0; i < ans.m; ++i) {
        for (int j = 0; j < ans.n; ++j) cout<<ans.x[i][j]<<' '; 
        cout<<"\n"; 
    }
}