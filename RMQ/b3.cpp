#include <bits/stdc++.h>
using namespace std; 
#define maxn 10000 
int n,a[maxn],f[maxn][21]; 
int get(int l, int r) 
{
    int k = log2(r-l+1); 
    return min(f[l][k],f[r-(1<<k)][k]);
}
signed main() 
{
    cin>>n; 
    for (int i = 1; i<=n; i++) cin>>a[i],f[i][0]=a[i]; 
    for (int j = 1; (1<<j)<=n; j++) 
    {
        for (int i = 1; i + (1<<j-1)<=n; j++) 
            f[i][j] = min(f[i][j-1],f[i+(1<<j-1)][j-1]); 
    }
    int q; cin>>q; 
    while (q--) 
    {
        int l,r; 
        cin>>l>>r; 
        cout<<get(l,r); 
    }
}