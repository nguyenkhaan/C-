#include <bits/stdc++.h>
using namespace std; 
#define max_range 502
#define rep(x,y,z) for((x) = y; (x) <= z; ++x)
int a[max_range][max_range]; 
int b[max_range][max_range]; 
int pre[max_range][max_range]; 
int m,n,k;  

void inp() 
{
    cin>>n>>m>>k; 
    int i,j; 
    rep(i,1,n) 
        rep(j,1,m) cin>>a[i][j];  // nhập ma trận a
    rep(i,1,n) 
        rep(j,1,m) 
        {
            char ch; cin>>ch; 
            b[i][j] = (ch - '0');  // chuyển ký tự thành số
        }
    rep(i,0,n) 
        rep(j,0,m) pre[i][j] = 0; 
    // Khởi tạo ma trận tiền tố pre
    pre[1][1] = (b[1][1] == 1)?1:0; 
    rep(i,2,n) {
        if (b[i][1] == 1) pre[i][1] = pre[i-1][1] + 1; 
        else pre[i][1] = pre[i-1][1]; 
    }
    rep(j,2,m) {
        if (b[1][j] == 1) pre[1][j] = pre[1][j-1] + 1; 
        else pre[1][j] = pre[1][j-1]; 
    }
    rep(i,2,n) 
        rep(j,2,m) 
        {
            if (b[i][j] == 1) 
                pre[i][j] = pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1] + 1; 
            else 
                pre[i][j] = pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1]; 
        }
}

int num1(int x1, int y1, int x2, int y2)  
{
    return (pre[x2][y2] - pre[x1-1][y2] - pre[x2][y1-1] + pre[x1-1][y1-1]); 
}
int ucln(int a, int b) 
{
    if (b == 0) return a; 
    else return ucln(b, a%b); 
}
void solve() 
{
    inp(); 
    int diff = 0,i,j; 
    for (i = 1; i<=n; ++i) 
    {
        int temp_diff = 0; 
        for (j = 1; j<=m; ++j) {  // Fixes the loop over columns
            if (b[i][j] == 1) temp_diff += a[i][j]; 
            else temp_diff -= a[i][j]; 
        }
        diff += temp_diff; 
    }
    if (diff == 0) {
        cout<<"yes"<<endl; return; 
    }
    int g = 0; 
    for (i = 1; i <= (n - k + 1); ++i) 
    {
        for (j = 1; j <= (m - k + 1); ++j) 
        {
            int f = abs((k * k) - 2*num1(i,j,i+k-1,j+k-1));  //do chenh lech cua so 0 va so 1 
            if (f != 0)
            {
                if (g == 0) g = f; 
                else g = ucln(g,f); 
            }
        }
    } 
    if (g != 0 && diff % g == 0) cout<<"yes"<<endl; 
    else cout<<"no"<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}
