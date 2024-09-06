#include <bits/stdc++.h>
using namespace std; 
#define MAX 200005 
long long prime[MAX],a[MAX],n; 
void sangNguyenTo(long long ma) 
{
    for (long long i=2; i<=ma; i++) prime[i] = 1; 
    for (long long i=2; i*i<=ma; i++) 
    {
        if (prime[i] == 1) 
        {
            for (long long j = i*i; j<=ma; j+=i) prime[j] = 0; 
        }
    }
}
int main() 
{
    cin>>n;
    long long sum(0),ma(0); 
    for (int i=0; i<n; i++) 
    {
        cin>>a[i]; 
        ma = max(ma,a[i]); 
    }
    sangNguyenTo(ma); 
    for (long long i=0; i<n; i++) if (a[i] >0 && prime[a[i]]==1) 
    {
        cout<<a[i]<<"  "; 
        sum+=a[i]; 
    }
    cout<<"\n"<<sum; 
    return 0; 
}
