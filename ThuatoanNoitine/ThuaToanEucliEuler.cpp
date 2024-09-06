#include <bits/stdc++.h>
using namespace std; 
int nguyen_to(long long n) 
{
    for (long long i=2; i*i<=n; i++) 
    {
        if (n%i ==0) return 0; 
    }
    return 1; 
}
int main() 
{
    long long n; 
    cin>>n; 
    for (long long i=2; i<=32; i++) 
    {
        long long t = (long long)pow(2,i)-1; 
        
        if (nguyen_to(i)==true && nguyen_to(t)==true) 
        {
            long long hoan_hao = (long long) (pow(2,i-1) * (pow(2,i)-1)); 
            if (hoan_hao>n) break; 
            cout<<hoan_hao<<endl; 
        }
    }
}