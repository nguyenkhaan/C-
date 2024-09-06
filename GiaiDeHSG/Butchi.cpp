#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    vector<int> a(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    int s1(0),s2(0),i(-1),j(n),v(1); 
    while (i<=j) 
    {
        while (s1 <= v*2) 
        {
            i++;
            s1+=a[i]; 
        }
        while (s2<=v) 
        {
            j--; 
            s2+=a[j];  
        }
        if ((i+1+n-j)>=n) break; 
        v++; 
    }
    cout<<(i+1)<<" "<<(n-i-1); 
}