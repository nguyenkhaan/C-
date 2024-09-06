//Tu ma tran ke, chuyen thanh danh sach ke 
#include <bits/stdc++.h>
using namespace std; 
#define maxRange 100
void solve() {
    int n; 
    cin>>n; 
    int a[maxRange][maxRange]; 
    for (long i = 1; i<=n; ++i) 
    {
        for (long j = 1; j<=n; ++j) cin>>a[i][j]; 
    }
    vector<vector<long>> b(n+1); 
    for (long i = 1; i<=n; ++i) 
    {
        for (long j = 1; j<=n; ++j) if (a[i][j]) 
        {
            b[i].push_back(j);
            b[j].push_back(i); 
        }
    }
    for (long i = 1; i<=n; ++i) 
    {
        for (auto c:b[i]) cout<<c<<"  "; 
        cout<<endl; 
    }
}
int main() 
{
    solve(); 
}