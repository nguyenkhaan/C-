#include <iostream> 
#include <stdio.h> 
#include <bits/stdc++.h> 
#include <limits.h> 
using namespace std; 
#define max(a,b) ((a>=b)?a:b)
#define min(a,b) ((a<=b)?a:b)
int main() 
{
    vector<int> a; 
    int n; cin>>n; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a.push_back(x); 
    }
    int MAX = 0; 
    int MIN = INT_MIN; 
    for (int x:a) MAX = max(x,MAX); 
    for (int x:a) MIN = min(x,MIN); 
    return 0; 
}