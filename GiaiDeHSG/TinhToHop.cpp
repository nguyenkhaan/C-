#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
#define MOD 1000000007
long long fac[1000],start; 
long long inv(long a, long b) 
{
    long long res = 1; 
    while (b){
        if (b%2==1) res = (1ll*res*a)%MOD; 
        a = (1ll*a*a)%MOD; 
        b>>=1;
    }
    return res % MOD; 
}
void factorial(long n) 
{
    for (int i = start+1; i<=n; ++i) fac[i] = (i*fac[i-1])%MOD; 
} 
long long C(long k, long n) 
{
    if (k>n) return 0;  
    if (k == n) return 1; 
    long long res = 1ll*(fac[n] * inv(fac[k],MOD-2))%MOD; 
    res = 1ll*(res * inv(fac[n-k],MOD-2))%MOD;
    return res; 
}
int main() 
{
    fac[1] = 1; 
    start = 1;  
    int T; 
    cin>>T; 
    while (T--) 
    {
        long n,k; 
        cin>>k>>n; 
        factorial(n); 
        start = n;  
        cout<<C(k,n)<<endl; 
    }
}