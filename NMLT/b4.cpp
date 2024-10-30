#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    if (n == 0) 
    {
        cout<<"0"; 
        return 0;  
    }
    while (n) 
    {
        int k = n % 10; 
        cout<<k<<endl; 
        n /= 10; 
    }
}