#include <bits/stdc++.h>
using namespace std; 
#define MOD 17 
long long fema(int a, int b) 
{
    long long result(1); 
    while (b) 
    {
        if (b%2!=0) result = (result*a)%MOD;
        a = (a*a)%MOD;
        b/=2; 
    }
    return result;
}
int main() 
{
    int a,b; 
    cin>>a>>b;
    cout<<(a * fema(b,MOD-2))%MOD; 
}