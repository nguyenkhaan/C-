/*
Hàm build: Dùng để xây dựng nên các giá trị cua cây phân đoạn (không có update) 
-> Quan hệ l == r -> cập nhật điều kiện cơ sở 
Hàm get: truy vấn giá trị của cây phân đoạn trên đoạn (u - v) 
-> Quan hệ: (l,r) ngoài u,v 
            (l,r) con u,v 
- Hàm update: dùng để update 1 điểm hoặc 1 khoảng u,v bằng/lên một giá trị x 
--> Quan hệ: điểm chứa trong, l== r (cập nhật đk cơ sở cho điểm) 
--> Quan hệ: (l,r) ngoài u,v ; (l,r) là con u,v 
*/
#include <stdio.h> 
#include <iostream>
using namespace std; 
struct node 
{
    int mi = INT_MAX; 
}t[1000]; 
int n = 8; 
int a[9] = {0,1,4,3,5,8,9,10,2}; 
void update(int id, int l, int r, int pos, int val) 
{
    if (pos<l || pos>r) return; 
    if (l == r) //== pos 
    {
        t[id].mi = val; 
        return; 
    }
    int m = (l+r)/2; 
    update(id*2,l,m,pos,val); 
    update(id*2+1,m+1,r,pos,val); 
    t[id].mi = min(t[id*2+1].mi,t[id*2].mi); 
}
int get(int id, int l, int r, int u, int v) 
{
    if (r<u || l>v) return INT_MAX; 
    if (u<=l && r<=v)  return t[id].mi; 
    int m = (l+r)/2; 
    int t1 = get(id*2,l,m,u,v); 
    int t2 = get(id*2+1,m+1,r,u,v); 
    return min(t1,t2); 
}
int main() 
{
    cout<<"Nhap so truy van: "; 
    int q; cin>>q; 
    for (int i=1; i<=n; i++) 
    {
        int x = a[i];
        update(1,1,n,i,x); 
    }
    while (q--) 
    {
        int pos,val,l,r; 
        cin>>l>>r>>pos>>val; 
        update(1,1,n,pos,val); 
        cout<<get(1,1,n,l,r)<<endl; 
    }
}