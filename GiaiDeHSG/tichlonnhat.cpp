#include <bits/stdc++.h>
using namespace std; 
#define MOD 1000000007 
    int n; 
int so_du(vector<int>a) 
{
    long long mod = 1; 
    for (int i=0; i<n; i++)
    {
        mod = (mod * a[i])%MOD; 
    }
    return mod;
}

int main() 
{
    vector<int> a; 

    cin>>n; 
    a.resize(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    int am(0),pos(0),am_min(INT_MIN); 
    for (int i=0; i<n; i++) if (a[i]<0) 
    {
        am++; 
        if (am_min < a[i]) 
        {
            am_min = a[i]; 
            pos = i; 
        }
    }
    if (am %2!=0) a[pos] = 1; 
    cout<<so_du(a);
}