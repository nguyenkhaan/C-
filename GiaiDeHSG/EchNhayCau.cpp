#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
#include <cmath>
#include <stdlib.h>
using namespace std; 
int main() 
{

    int n; cin>>n; 
    vector<pair<int,int>> a(n+2); 
    for (int i=1; i<=n; i++) cin>>a[i].first; 
    a[0].second = 0; 
    a[0].first = 0;  
    a[1].second = 0; 
    for (int i=2; i<=n; i++) 
    {
        int step1 = abs(a[i].first-a[i-1].first)+a[i-1].second; 
        int step2 = abs(a[i].first-a[i-2].first)+a[i-2].second; 
        a[i].second = min(step1,step2); 
    }
    cout<<a[n].second; 

}