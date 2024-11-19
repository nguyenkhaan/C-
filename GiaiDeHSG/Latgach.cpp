/* 
Cho một sân vườn kích thước 2xN. Hay tìm cách lát viên gạch có kích thước 2x1 hoặc 1x2 
sao cho không có viên gạch nào bị thừa ra*/
#include <bits/stdc++.h>
using namespace std; 
struct matrix
{
    int x[2][2]; 
    void setter() 
    {
        for (int i = 0; i < 2; ++i) 
            for (int j = 0; j < 2; ++j) x[i][j] = 0; 
    }
}; 
matrix a; 
matrix b; 
matrix operator * (const matrix &a, const matrix &b) 
{
    matrix ans; 
    ans.setter(); 
    for (int i = 0; i < 2; ++i) 
    {
        for (int j = 0; j < 2; ++j) 
        {
            for (int k = 0; k < 2; ++k) ans.x[i][j] += (a.x[i][k] * b.x[k][j]); 
        }
    }
    return ans; 
}
matrix Pow(matrix a, int n) 
{
    matrix ans; 
    ans.setter(); 
    ans.x[1][1] = ans.x[0][0] = 1; 
    while (n) 
    {
        if (n & 1) ans = ans * a; 
        a = a * a; 
        n /= 2; 
    }
    return ans; 
}
int main() 
{
    a.setter(); b.setter(); 
    b.x[0][0] = 1; 
    a.x[0][0] = a.x[1][0] = a.x[0][1] = 1; 
    int n; 
    cin >> n; 
    matrix res = Pow(a , n-1) * b; 
    cout<<res.x[0][0]; 
}