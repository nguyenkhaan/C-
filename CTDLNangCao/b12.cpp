#include <stdio.h>
#include <iostream>
using namespace std; 
struct node
{
    int sum = 0; 
}t[1000]; 
int n = 8; 
int a[9] = {0,1,3,2,4,5,8,9,10}; 
void update(int id, int l, int r, int pos, int val) 
{
    if (r<pos || pos<l) return; 
    if (l == r) 
    {
        t[id].sum += val; 
        return; 
    }
    int m = (l+r)/2; 
    update(id*2,l,m,pos,val); 
    update(id*2+1,m+1,r,pos,val); 
    t[id].sum = t[id*2].sum + t[id*2+1].sum; 
}
int get(int id, int l, int r, int u, int v) 
{
    if (r<u || l>v) return 0; 
    if (l>=u && r<=v) return t[id].sum; 
    int m =(l+r)/2; 
    int t1 = get(id*2,l,m,u,v); 
    int t2 = get(id*2+1,m+1,r,u,v); 
    return t1 + t2; 
}
int main() 
{
    for (int i=1; i<=n; i++) 
    {
        int x = a[i]; 
        update(1,1,n,i,x); 
    }
    int q; 
    cin>>q; 
    while (q--) 
    {
        int pos,val; 
        cin>>pos>>val; 
        update(1,1,n,pos,val); 
        cout<<get(1,1,n,1,pos)<<endl; 
    }
}