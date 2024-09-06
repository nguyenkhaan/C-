#include <stdio.h> 
#include <iostream>
#include <math.h>
using namespace std; 
#define min(a,b) ((a<=b)?a:b)
int main()
{
    int t;  cin>>t; 
    for (int i=0; i<t; i++) 
    {
        int a,b,c; 
        cin>>a>>b>>c;
        int mid; 
        mid = a; 
        int ans = fabs(mid - b) + fabs(mid - c); 
        mid = b; 
        ans = min(ans,fabs(mid-a)+fabs(mid-c)); 
        mid = c; 
        ans = min(ans,fabs(mid-a)+fabs(mid-b)); 
        cout<<ans<<endl; 
    }
    return 0; 
}