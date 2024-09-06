#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    vector<int> a(n); 
    for (i=0; i<n; i++) cin>>a[i]; 
    //Dem phan tu x trong vecto 
    int d = 0; 
    int x; cout<<"Nhap phan tu: "; cin>>x; 
    for (vector<int>::iterator i = a.begin(); i!=a.end(); i++) 
    {
        if (*i == x) ++d; 
    }
    cout<<d; 
    return 0; 
}