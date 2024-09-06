#include <stdio.h> 
#include <iostream>
using namespace std; 
struct node 
{
    int ma = INT_MIN; 
}; 
node t[1000]; 
int a[9] = {0,10,2,3,4,8,7,9}; 
int n = 8; 
void build(int id, int l, int r) 
{
    if (l==r) 
    {
        t[id].ma = a[l]; 
        return; 
    }
    int mid = (l+r)/2; 
    build(id*2,l,mid); 
    build(id*2+1,mid+1,r); 
    t[id].ma = max(t[id*2],t[id*2+1]); 
}
int get(int id, int l, int r, int u, int v, int pos, int val) 
{
    if (r<u || l>v) return INT_MIN; 
    if ((pos<l || pos>r) && (l>=u && r<=v)) return t[id].ma; 
    if (l == r) //==pos 
    {
        t[id].ma = val; 
        return t[id].ma;
    }
    int mid = (l+r)/2; 
    int t1 = get(id*2,l,mid,u,v,pos,val); 
    int t2 = get(id*2+1,mid+1,r,u,v,pos,val); 
    return max(t1,t2);
}
int main() 
{
    build(1,1,n);
}