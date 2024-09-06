#include <stdio.h> 
#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    cout<<(bitset<10>(n))<<endl;
    int k = n & (-n); 
    cout<<k<<endl;
}