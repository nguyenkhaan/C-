#include <bits/stdc++.h>
using namespace std; 
#define max_range 100 
struct matrix {
    float x[max_range][max_range]; 
    int m; // Số hàng
    int n; // Số cột
};

matrix a, b; 

matrix operator * (const matrix &a, const matrix &b) {
    matrix c; 
    c.m = a.m; 
    c.n = b.n; 
    for (int i = 0; i < a.m; ++i) {
        for (int j = 0; j < b.n; ++j) {
            c.x[i][j] = 0; 
            for (int k = 0; k < a.n; ++k) {
                c.x[i][j] += (a.x[i][k] * b.x[k][j]); 
            }
        }
    }
    return c; 
}

void inp() 
{
    cin >> a.m >> a.n; 
    for (int i = 0; i < a.m; ++i) 
        for (int j = 0; j < a.n; ++j) 
            cin >> a.x[i][j];
    cin >> b.m >> b.n; 
    for (int i = 0; i < b.m; ++i) 
        for (int j = 0; j < b.n; ++j) 
            cin >> b.x[i][j];
}

int main() 
{
    inp(); 
    matrix ans = a * b; 
    for (int i = 0; i < ans.m; ++i) {
        for (int j = 0; j < ans.n; ++j) 
            cout << ans.x[i][j] << " "; 
            cout << endl; 
    }
}
