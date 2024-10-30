#include <iostream> 
using namespace std; 
int main() 
{
    int a,b,n; 
    cin>>a>>b>>n; 
    long long sum = 0; 
    int i = 0; 
    while (i < n) 
    {
        sum += 1ll*a*b; 
        ++a; 
        ++b; 
        ++i; 
    }
    cout<<sum; 
}