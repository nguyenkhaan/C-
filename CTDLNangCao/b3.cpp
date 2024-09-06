/*
Cho mot mang a, se gom co q truy van 
Gom hai chu so la k va x. Thay gia tri tai vi tri k thanh x 
Xuat ra gia tri cua doan moi khi thuc hien trong tung truy van 
*/
#include <stdio.h> 
#include <iostream>
using namespace std; 
struct node 
{
    int tong = 0; 
}; 
node t[1000]; 
int n = 8; 
int a[9] = {0,1,2,3,4,5,6,7,8}; 
void build(int id, int l, int r) 
{
    if (l==r) 
    {
        t[id].tong = a[l]; 
        return; 
    }
    int mid = (l+r)/2; 
    build(id*2,l,mid); 
    build(id*2+1,mid+1,r); 
    t[id].tong = t[id*2].tong + t[id*2+1].tong; 
}
int get(int id, int l, int r, int u, int v, int pos, int val) 
{
    if (l>v || r<u) return 0;
    if ((pos<l || pos>r) && (u<=l && v>=r))return t[id].tong; 
    if (l==r) 
    {
        t[id].tong = val; 
        return t[id].tong; 
    }
    int mid = (l+r)/2; 
    int t1 = get(id*2,l,mid,u,v,pos,val); 
    int t2 = get(id*2+1,mid+1,r,u,v,pos,val); 
    return t1 + t2; 
}
int main() 
{
    build(1,1,n); 
    cout<<get(1,1,n,2,6,3,5); 
}
