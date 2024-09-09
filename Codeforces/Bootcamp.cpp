#include <bits/stdc++.h>
using namespace std; 
#define MOD 1000000007 
long long binary_expo(long long a, long long b) 
{
    long long res = 1; 
    while (b) 
    {
        if (b % 2 != 0) res = (res * a) % MOD; 
        a = (a * a) % MOD; 
        b /= 2; 
    }
    return (res % MOD);
}
int main() 
{
    cout<<binary_expo(2,6); 
}