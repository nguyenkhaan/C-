#include <stdio.h> 
#include <iostream>
using namespace std; 
long long lay_du(int a, int b, int c) 
{
    long long mod = 1; 
    for (long long i=1; i<=b; i++) 
    {
        mod = mod * ((a%c)%c)%c; 
    }
    return mod%c; 
}
int main() 
{
    int a,b,c; 
    cin>>a>>b>>c; 
    cout<<lay_du(a,b,c); 
}