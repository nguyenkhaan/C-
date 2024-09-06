#include <stdio.h> 
#include <iostream> 
#include <stdbool.h>
#include <bits/stdc++.h>
#include <math.h>
bool t; 
using namespace std; 
#define nt(n) do  \
{ \
    for (int j=2; j<=(int)sqrt(n);j++) if (n%j==0) {t = false; break;} \
} while(0)
int main() 
{
    vector<int> a; 
    int n; cin>>n; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a.push_back(x); 
    }
    for (vector<int>::iterator b = a.begin(); b!=a.end(); b++) 
    {
        t = true; 
        nt(*b); 
        if (t==true) printf("%d ",*b); 
    }
    return 0;
    
}
