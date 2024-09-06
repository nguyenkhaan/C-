#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    map<int,int> a; 
    int n; cin>>n; 
    int x; 
    for (int i=0; i<n; i++) 
    {
        cin>>x; 
        a[x]++; 
    }
    for (pair<int, int> k:a) cout<<k.first<<" "<<k.second<<endl; 
    return 0; 
}