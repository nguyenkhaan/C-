#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 
using namespace std; 
#define MAX 1000
struct node
{
    int pos;
}t[1000]; 
int n;
pair<int,int> a[MAX]; 
void build(int id, int l, int r, int x) 
{
    if (l == r) 
    {
        if (a[l].first == x) t[id].pos = a[l].second; 
        else t[id].pos = 0; 
        return; 
    }
    int mid = (l+r)/2; 
    build(id*2,l,mid,x); 
    build(id*2,mid+1,r,x); 
    t[id].pos = max(t[id*2].pos,t[id*2+1].pos); 
}
int main() 
{
    cin>>n; 
    for (int i=1; i<=n; i++) 
    {
        cin>>a[i].first; 
        a[i].second = i; 
    }
    cout<<"MOI nhap so Truy van: \n"; 
    int q; cin>>q; 
    while (q--) 
    {
        int l,r,x; 
        cin>>l>>r>>x; 
        build(1,l,r,x); 
        if (t[1].pos != 0) cout<<t[1].pos; 
    }
}