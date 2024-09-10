#include <bits/stdc++.h>
using namespace std; 
#define max_range 505  
long long a[max_range][max_range]; 
long long m,n; 
void inp() 
{
    cin>>n>>m; 
    for (long long i = 0; i<=n+1; ++i) 
    {
        for (long long j = 0; j<=m+1; ++j) a[i][j] = 0; 
    }
    for (long long i = 1; i<=n; ++i) 
    {
        for (long long j = 1; j<=m; ++j) cin>>a[i][j]; 
    }
}
void solve() 
{
    inp(); 
    for (long long i = 1; i<=n; ++i) 
    {
        for (long long j = 1; j<=m; ++j) 
        {
            if (a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j+1] && a[i][j] > a[i][j-1]) 
            {
                a[i][j] = max({a[i-1][j],a[i+1][j],a[i][j+1],a[i][j-1]});
            }
        }
    }
    for (long long i = 1; i<=n; ++i) 
    {
        for (long long j = 1; j<=m; ++j) cout<<a[i][j]<<" "; 
        cout<<endl; 
    }
}
int main() 
{
    long long t; cin>>t; 
    while (t--) solve(); 
}
