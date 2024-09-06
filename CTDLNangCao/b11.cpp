#include <stdio.h> 
#include <iostream>
using namespace std; 
struct node 
{
    int sum = 0; 
    int rem = 0; 
}t[1000]; 
int n = 8; 
int a[9] = {0,1,3,4,2,7,8,9,10}; 
void update(int id, int l, int r, int u, int v, int val)
{
    if (r<u || l>v) return; 
    if (l>=u && r<=v) 
    {
        t[id].sum += val; 
        t[id].rem +=val; 
        return; 
    }
    if (t[id].rem != 0) 
    {
        t[id*2].sum +=t[id].rem; 
        t[id*2+1].sum +=t[id].rem; 
        t[id*2+1].rem +=t[id].rem;
        t[id*2+1].rem +=t[id].rem;
        t[id].rem = 0; 
    }
    int m = (l+r)/2; 
    update(id*2,l,m,u,v,val); 
    update(id*2+1,m+1,r,u,v,val); 
    t[id].sum = t[id*2].sum + t[id*2+1].sum; 
}
int get(int id, int l, int r, int u, int v) 
{
    if (r<u || l>v) return 0; 
    if (l>=u && r<=v) return t[id].sum; 
    if (t[id].rem != 0) 
    {
        t[id*2].sum +=t[id].rem; 
        t[id*2+1].sum +=t[id].rem; 
        t[id*2+1].rem +=t[id].rem;
        t[id*2+1].rem +=t[id].rem;
        t[id].rem = 0; 
    }
    int m =(l+r)/2; 
    int t1 = get(id*2,l,m,u,v); 
    int t2 = get(id*2+1,m+1,r,u,v); 
    return t1+t2; 
}
int main() 
{
    for (int i=1; i<=n; i++) 
    {
        int x = a[i]; 
        update(1,1,n,i,i,x); 
    }
}