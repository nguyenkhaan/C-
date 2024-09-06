#include <bits/stdc++.h>
using namespace std; 
#define MOD 10000
long long quick_square(int a, int b) 
{
    long long result(1); 
    while (b) 
    {
        if (b % 2 !=0) result *=a; 
        a *=a; 
        b/=2; 
    }
    return (result); 
}
int main() 
{
    int a,b,n; 
    cin>>a>>b; 
    cout<<quick_square(a,b);
}