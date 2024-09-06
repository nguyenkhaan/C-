//Dung de cap nhat phan tu len mot gia tri x trong doan l -> r 
#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int n; 
void update(int a[], int l, int r, int x) 
{
    int d[1000]; 
    d[0] = a[0]; 
    for (int i=1; i<n; i++) d[i] = a[i] - a[i-1]; 
    d[l] += x; 
    d[r+1] -= x; 
    for (int i=1; i<n; i++) a[i] = d[i] + a[i-1]; 
    for (int i=0; i<n; i++) cout<<a[i]<<"  "; 
}
int main() 
{
    int l,r; 
    cin>>n>>l>>r; 
    int a[1000]; 
    for (int i=0; i<n; i++) cin>>a[i];
    cout<<"Nhap x: "; 
    int x; cin>>x;  
    update(a,l,r,x); 


}