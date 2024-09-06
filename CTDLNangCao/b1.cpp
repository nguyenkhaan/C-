#include <stdio.h> 
#include <iostream>
using namespace std; 
int t[1000]; 
int a[1000]; 
void build(int id, int l, int r) 
{
    if (l==r) 
    {
        t[id] = a[l]; 
        return; 
    }
    int mid = (l+r)/2; 
    build(id*2,l,mid); 
    build (id*2+1,mid+1,r); 
    t[id] = t[id*2] + t[id*2+1]; 
}
int main() 
{
    int n; cin>>n; 
    for (int i=1; i<=n; i++) cin>>a[i]; 
    int q; cin>>q; 
    for (int i=0; i<q; i++) 
    {
        int l,r; 
        cin>>l>>r; 
        build(1,l,r); 
        cout<<t[1]<<endl;
        for (int i=0; i<=n; i++) t[i] = 0; 
    }
}