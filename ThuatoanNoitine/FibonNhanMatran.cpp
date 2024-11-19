#include <bits/stdc++.h>
using namespace std; 
struct matrix 
{
    int x[2][2]; 
    matrix() 
    {
        memset(x,0,sizeof(x)); 
    }
}; 
matrix operator * (const matrix &a, const matrix &b) 
{
    matrix c; 
    for (int i = 0; i<2; ++i) 
    {
        for (int j = 0; j<2; ++j) 
        {
            for (int k = 0; k<2; ++k) c.x[i][j] += a.x[i][k] * b.x[k][j]; 
        }
    }
    return c; 
}
matrix Pow(matrix a, int n)
{
    matrix I; 
    for (int i = 0; i<2; ++i) I.x[i][i] = 1; //tao ma tran don vi 
    if (n == 0) return I; 
    matrix ans = I; 
    while (n) 
    {
        if (n%2!=0) ans = ans * a; 
        a = a * a; 
        n /= 2; 
    }
    return ans; 
}
int main() 
{
    int n; 
    cin>>n; 
    matrix T; 
    T.x[0][0] = T.x[0][1] = T.x[1][0] = 1; 
    T = Pow(T,n-1); 
    matrix u; 
    u.x[0][0] = 1;  
    matrix ans = T * u; //dinh nghia toan tu * 
    cout<<ans.x[0][0]; 
}