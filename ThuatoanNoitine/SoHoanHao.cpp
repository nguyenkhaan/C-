#include <stdio.h> 
#include <bits/stdc++.h>
using namespace std; 
int perfect(int n) 
{
    int sum = 0;
    for (int i=2; i*i<=n; i++) if (n % i ==0) 
    {
        // cout<<i<<"   "; 
        sum += (i+n/i); 
    }
    if (sum == n-1) return 1; 
    return 0; 
}
int main() 
{
    int n; 
    cin>>n; 
    if (perfect(n)) cout<<"La so hoan hao"; 
    else cout<<"Khong hoan hao"; 
    return 0; 

}