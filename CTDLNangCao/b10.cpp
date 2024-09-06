#include <stdio.h> 
#include <iostream>
#include <algorithm>
using namespace std; 
struct node 
{
    int sum  =0; 
}t[1000]; 
int n  =8; 
int a[9] {0,1,4,3,5,6,7,8,10};
void build(int id, int l, int r) 
{
    if (l == r) 
    {
        t[id].sum = a[l]; 
        return; 
    }
    int m  = (l+r) / 2; 
    build(id*2,l,m); 
    build(id*2+1,m+1,r); 
    t[id] = t[id*2] + t[id*2+1]; 
}
int get(int id, int l, int r, int u, int v) 
{
    if (r<u || l>v) return 0; 
    if (u<=l && r<=v) return t[id]; 
    int m = (l+r) /2; 
    int t1 = get(id*2,l,m,u,v); 
    int t2 = get(id*2+1,m+1,r,u,v); 
    return t1 + t2; 
}