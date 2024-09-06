#include <stdio.h>
#include <iostream>
using namespace std; 
int ucln(int a, int b) 
{
    if (b==0) return a; 
    return ucln(b,a%b); 
}
int main() 
{
    int n; cin>>n; 
    if (n%2!=0) cout<<n*(n-1)*(n-2); 
    else 
    {
        if (ucln(n,n-3) ==1) cout<<n*(n-1)*(n-3); 
        else cout<<(n-1)*(n-2)*(n-3); 
    }
}