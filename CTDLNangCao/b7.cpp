#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std; 
int n = 8; 
int a[9] = {0,1,2,3,4,5,6,7,8}; 
struct node 
{
    int ma = INT_MIN;
}; 
node t[1000]; 
void build(int id, int l, int r) 
{
    if(l== r) 
    {
        t[id].ma = a[l]; 
        return; 
    }
    int m = (l+r)/2; 
    build(id*2,l,m); 
    build(id*2+1,m+1,r); 
    t[id].ma = max(t[id*2].ma,t[id*2+1].ma); 
}
int get(int id, int l, int r, int u, int v, int pos, int val) 
{
    if (r<u || l>v) return INT_MIN; 
    if (l == r) 
    {
        t[id].ma = val; 
        return t[id].ma; 
    }
    if (pos<l || pos>r && (u<=l && v>=r)) return t[id].ma; 
    int m = (l+r)/2; 
    int t1 = get(id*2,l,m,u,v,pos,val); 
    int t2 = get(id*2+1,m+1,r,u,v,pos,val);  
    return max(t1,t2); 
}
int main() 
{
    build(1,1,n);
    int q; 
    cout<<"Nhap so truy van: "; cin>>q; 
    for (int i=0; i<q; i++)
    {
        int l,r,pos,val; 
        cin>>l>>r>>pos>>val; 
        cout<<get(1,1,n,l,r,pos,val)<<endl;
    }
    return 0; 
}