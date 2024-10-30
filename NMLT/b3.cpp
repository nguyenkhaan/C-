#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    long n; 
    cin>>n; 
    long m = n; 
    n = abs(n); 
    int d = 0; 
    while (n) 
    {
        ++d; 
        n /= 10; 
    }
    if (m == 0) cout<<"So 0 co 1 chu so"; 
    else if (m < 0) cout<<"So "<<m<<" co "<<d<<" chu so va 1 dau"; 
    else cout<<"So "<<m<<" co "<<d<<" chu so"; 
}