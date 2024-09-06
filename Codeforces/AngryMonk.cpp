#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
typedef long long int lli; 
void xu_li() 
{
    lli s,n; 
    lli max = 0; 
    cin>>s>>n; 
    vector<lli> a(n); 
    for (lli i=0; i<n; i++) 
    {
        cin>>a[i]; 
        if (max<=a[i]) max = a[i]; 
    }
    cout<<(2*(s-max) - n +1)<<endl; 
}
int main()
{
    lli t; 
    cin>>t; 
    for (lli i=0; i<t; i++) xu_li(); 
    return 0; 

}