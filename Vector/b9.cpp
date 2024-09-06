#include <stdio.h> 
#include <bits/stdc++.h>
#include <stdbool.h>
#include <limits.h> 
#define max(a,b) ((a>=b)?a:b)
#define min(a,b) ((a<=b)?a:b)
using namespace std; 
int main() 
{
    int n; cin>>n; 
    vector<int> a; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a.push_back(x); 
    }
    int u,v; 
    int j = n; 
    pair<bool,bool> t(true,true); 
    for (int i=0; i<n; i++) 
    {
        if (t.first==true) u = i; 
        if (t.second==true) v = j-1; 
        int MAX = 0; 
        int MIN = INT_MAX; 
        for (int k=u; k<=v;k++) 
        {
            MAX = max(MAX,a[k]); 
            MIN = min(MIN,a[k]); 
        }
        //Kiem tra MAX va MIN co nam o dau va cuoi day khong 
        if (MIN!=a[u]) t.first = false; 
        if (MAX!=a[v]) t.second = false; 
        if ((i==j) || (t.first==false && t.second==false)) break; 
    }
    printf("%d  %d",u,v); 
    return 0; 
}