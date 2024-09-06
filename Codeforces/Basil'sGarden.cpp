#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int nhap(vector<int> &a, int n) 
{
    int max = 0; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a.push_back(x); 
        if (max<=a[i]) max = a[i]; 
    }
    return max; 
}
int xuli(vector<int> &a) 
{
    int d = 0;
    int n = a.size(); 
    for (int i=0; i<n-1; i++) if (a[i]<=a[i+1])
    {
        d++; 
    }
    return d; 
}
int main() 
{
    int n; cin>>n; 
    vector<int> a; 
    int max = nhap(a,n); 
    int d = xuli(a); 
    cout<<(d+max); 
    return 0; 

}