#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    vector<int> a(n+1); 
    for (int i=1; i<=n; i++) cin>>a[i]; 
    int f[1000],t[1000]; 
    f[0] = 0; 
    for (int i=1; i<=n; i++) 
    {
        f[i] = 0; 
        for (int j = 0; j<i; j++) if (a[j] < a[i]) 
        {
            f[i] = max(f[i],f[j])+1; 
            t[i] = j; 
        }
    }
    int posmax(0),ma(0); 
    for (int i=0; i<=n; i++) if (ma<=a[i]) 
    {
        posmax = t[i]; 
        ma = a[i]; 
    }
    while (posmax !=0) 
    {
        cout<<a[posmax]<<"  "; 
        posmax = t[posmax]; 
    }
}