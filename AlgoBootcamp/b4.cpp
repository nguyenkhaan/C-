#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int m,n,k; 
    cin>>m>>n>>k; 
    if (k > min(m,n)) {
        cout<<"Impossible"; 
        return; 
    }
    int x = 0; 
    char a[150][150]; 
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) a[i][j] = '.'; 
    }
    for (int i = 0; i < min(m,n); ++i) 
    {
        a[x][x] = '*'; 
        ++x; 
    }
    cout<<"Possible"<<endl; 
    for (int i = 0; i<m; ++i) 
    {
        for (int j = 0; j < n; ++j) cout<<a[i][j]<<' ';  
        cout<<endl; 
    }
}
int main() 
{
    solve(); 
}