/*
Segment tree: Cây phân đoạn 
- Cho mảng a có n phần tử. có q truy vấn 
1) Thay số a[x] thanhf v 
2) Tính tổng của các phần tử [l,r]
*/
#include <stdio.h> 
#include <iostream>
using namespace std;
int a[9] = {0,1,3,5,2,8,6,7}; 
int n = 8; 
struct node
{
    int tong; 
}; 
node t[100]; 
void build(int id, int l, int r) //Goi tat ca cac doan con
{
    if (l == r) 
    {
        t[id].tong = a[l]; 
        return; 
    }
    int mid = (l+r)/2; 
    build(id*2,l,mid); 
    build(id*2+1,mid+1,r);
    t[id].tong = t[id*2].tong+t[id*2+1].tong; 
}
int get(int id, int l, int r, int u, int v) 
{
    if (r<u || v<l) return 0; 
    if (l==r) return t[id].tong; 
    int mid = (l+r)/2; 
    int t1 = get(id*2,l,mid,u,v); 
    int t2 = get(id*2+1,mid+1,r,u,v); 
    return t1+t2; //Dem tang gia tri cho cap cha 
}
main()
{
    build(1,1,n); 
    cout<<get(1,1,n,2,5); 
}