#include <iostream> 
#include <stdio.h> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    vector<int>a(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    vector<int> b; 
    for (int i=n-1; i>=0; i--) b.push_back(a[i]); 
    for (vector<int>::iterator i = b.begin(); i!=b.end(); i++) cout<<*i<<"   "<<endl; 
    return 0;
}