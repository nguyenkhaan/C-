#include <stdio.h> 
#include <iostream> 
#include <stdbool.h>
#include <bits/stdc++.h>
#define MAX 100000
int S; 
void prefix_sum(int n,int a[], auto b)
{
    *b  =  *a; 
    for (int i=1; i<n; i++) *(b+i) = *(b+i-1) + *(a+i);  
}
using namespace std; 
bool binary_search(int a, int b, int *s)  //Vi tri bat dau va vi tri ket thuc 
{
    if (a<b)
    {
        int mid = (a+b)/2; 
        s = s + mid; 
        if (*s == S/2) return true; 
        if (*s > S/2) binary_search(a,mid-1,s); 
        if (*s < S/2) binary_search(mid+1,b,s); 
    }
    return false; 
}  
int main()
{
    int n; cin>>n; 
    int a[MAX]; 
    vector<int> ps(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    prefix_sum(n,a,ps.begin()); 
    S = ps.back(); //Tong sau cung 
    if (S % 2 == 0) 
    {
        bool t = binary_search(0,n-1,&ps[0]);
        if (t==true) cout<<"YES"; 
        else cout<<"NO"; 
    }
    else cout<<"NO"; 
    return 0; 
}