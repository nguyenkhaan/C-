#include <bits/stdc++.h>
using namespace std; 
#define maxn 2e5 
int n,f[maxn][22],a[maxn]; 
int get(int l, int r) 
{
    int k = log2(r-l+1); 
    return min(f[l][k],f[r-(1<<k)][k]); 
}
int main() 
{
    cin>>n; 
    for (int i = 1; i<=n; i++) cin>>a[i] , f[i][0] = a[i]; 
    for (int j = 1; (1<<j)<=n; j++) 
    {
        for (int i = 1; i + (1<<j-1) <=n; i++) 
        {
            f[i][j] = min(f[i][j-1],f[i+(1<<j-1)][j-1]); 
        }
    }
}