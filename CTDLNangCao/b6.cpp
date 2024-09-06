#include <stdio.h> 
#include <iostream>
#include <algorithm>
using namespace std; 
struct node 
{
    int max1 = INT_MIN; 
    int max2 = INT_MIN; 
}; 
node t[1000]; 
int n = 8; 
int a1,a2,a3,a4; 
int a[9] = {0,1,3,2,4,8,9,5,10}; 
void update(int x) 
{
    if (x == a1) 
    {
        a1 = 0; return; 
    }
    if (x == a2) 
    {
        a2 = 0; return; 
    }
    if (x == a3) 
    {
        a3 = 0; return; 
    }
    if (x == a4)
    {
        a4 = 0; return; 
    }
}
void build(int id, int l, int r) 
{
    if (l==r) 
    {
        t[id].max1 = a[l]; 
        t[id].max2 = 0; 
        return; 
    }
    int mid = (l+r)/2; 
    build(id*2,l,mid); 
    build(id*2+1,mid+1,r); 
    a1 = t[id*2].max1; 
    a2 = t[id*2].max2; 
    a3 = t[id*2+1].max1; 
    a4 = t[id*2+1].max2; 
    t[id].max1 = max({a1,a2,a3,a4}); 
    update(t[id].max1); 
    t[id].max2 = max({a1,a2,a3,a4}); 
}
node Get(int id, int l, int r, int u, int v, int pos, int val) 
{
    if (l>v || r<u) return {0,0}; 
    if ((pos<l || pos>r) && (l>=u && r<=v)) return t[id];
    if (l==r) 
    {
        t[id].max1 = val; t[id].max2 = 0; 
        return t[id];
    }
    int m = (l+r)/2; 
    node ans;
    node ans1 = Get(id*2,l,m,u,v,pos,val);
    node ans2 = Get(id*2+1,m+1,r,u,v,pos,val); 
    a1 = ans1.max1; 
    a2 = ans1.max2;
    a3 = ans2.max1; 
    a4 = ans2.max2; 
    ans.max1 = max({a1,a2,a3,a4}); 
    update(ans.max1); 
    ans.max2 = max({a1,a2,a3,a4}); 
    return ans; 
}
int main() 
{
    build(1,1,n); 
    node ans = Get(1,1,n,2,5,3,6); 
    cout<<ans.max1<<"   "<<ans.max2; 
    return 0; 
}