#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
#define max(a,b) ((a>=b)?a:b)
void prefix_sum(int n, auto a, auto b) //a bieu thi cho mang, b bieu thi cho mang tong 
{
    *b = *a; 
    for (int i=1; i<n; i++) *(b+i) = *(b+i-1) + *(a+i); 
}
void prefix_max(int n, auto a, auto b) 
{
    *b = *a; 
    for (int i=0; i<n; i++) *(b+i) = max(*(b+i-1),*(a+i)); 
}
int main()
{
    int t; cin>>t; 
    for (int j=0; j<t; j++)
    {
        int n; cin>>n; 
        vector<int> a(n); 
        vector<int> S(n);
        vector<int> MAX(n); 
        int scl; 
        for (int i=0; i<n; i++) cin>>a[i];
        prefix_sum(n,a.begin(),S.begin()); //Tao prefix sum 
        prefix_max(n,a.begin(),MAX.begin()); 
        int d = 1; 
        for (int i=1; i<n; i++) 
        {
            scl = S[i] - MAX[i]; 
            if (MAX[i] == scl) d++; 
        }
        cout<<d<<endl; 
    }
    return 0; 
    
}