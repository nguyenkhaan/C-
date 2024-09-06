#include <iostream>
#include <stdio.h> 
#include <algorithm>
#include <bits/stdc++.h>
using namespace std; 
int n; 
vector<int> nen_mang(vector<int> a) 
{
    vector<int> b; 
    set<int> s(a.begin(),a.end()); 
    for (int x : a) 
    {
        int index = lower_bound(s.begin(),s.end(),x) - s.begin(); 
        b.push_back(index+1); 
    }
    return b; 
}
int main() 
{
    cin>>n; 
    vector<int> a(n); 
    for (int i=0; i<n; i++) cin>>a[i]; 
    vector<int> c = nen_mang(a); 
    for (int x:c) cout<<x<<" "; 
}