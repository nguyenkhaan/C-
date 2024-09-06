/* 
f[i] = f[i-1] + f[i-2]; 
f[0] = 0, f[1] = 1; 
==> Fibonacci bằng nhân ma trận 
f[n] (n <= 10^18 MOD 10^9 + 7) 
- Nhân ma trận: 
- Nhân 2 vecto: 
u = (a1,b1,c1,d1,e1) 
v = (a2,b2,c2,d2,e2) m
-> uv = a1*a2 + b1*b2 + c1*c2 + d2*d1 + e1*e2; 
- Điều kiện: hai vecto có cùng kích thước 
for (1 -> n) s+= a[i] * b[i]; 
- Ma trận: mảng 2 chiều (mxn) -> MA TRẬN VUÔNG (nxn) 
A(m x n) * B(n x p) = C(m x p) 
(dòng)      (cột) 
Source code: 
for (i = 1 -> n) 
    for (j = 1 -> m) 
    for (int k = 1 -> p) 
    c[i][j] = a[i][k] * b[k][j]; 
Thực hành: Viết chương trình nhân 2 ma trận 
*/
#include <bits/stdc++.h>
using namespace std; 
#define max_range 100 
struct matrix 
{
    int x[max_range][max_range]; 
    int m; 
    int n; 
    void setter() 
    {
        for (int i = 0; i<m; ++i) {
            for (int j = 0; j<n; ++i) cin>>x[i][j]; 
        }
    }
}; 
matrix a; 
matrix b; 
matrix operator * (const matrix &a, const matrix &b) 
{
    matrix c; 
    c.m = a.m; 
    c.n = b.n; 
    for (int i = 0; i<a.m; ++i) 
    {
        for (int j = 0; j<b.n; ++j) 
        {
            c.x[i][j] = 0; 
            for (int k = 0; k<a.n; ++k) c.x[i][j] += (a.x[i][k] * b.x[k][j]); 
        }
    }
    return c; 
}
void inp() 
{
    cin>>a.n>>a.m; 
    a.setter(); 
    cin>>b.n>>b.m; 
    b.setter(); 

}
int main() 
{
    inp(); 
    matrix ans = a * b; 
    for (int i = 0; i<ans.m; ++i) {
        for (int j = 0; j<ans.n; ++j) cout<<ans.x[i][j]<<" "; 
        cout<<endl; 
    }
}