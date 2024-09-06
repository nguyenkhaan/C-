/*
- 3 hàm: 
- build: xây dựng cây phân đoạn, tạo ra giá trị của các node 
- update: vừa xây dựng, vừa update lại các giá trị của cây phân đoạn 
- get: return về giá trị của các node 

*/
#include <stdio.h> 
#include <iostream> 
#include <algorithm>
using namespace std; 
struct node 
{
    int mi = 0; 
    int rem = 0; 
}t[1000]; 
int n; 
int a; 
void update(int id, int l, int r, int u, int v, int val) 
{
    if (r<u || l>v) return; 
    if (l>=u && r<=v) 
    {
        t[id].mi +=val;  
        t[id].rem += val; 
        return; 
    }
    if (t[id].rem != 0) 
    {
        int x = t[id].rem; 
        t[id*2].mi +=x; 
        t[id*2+1].mi +=x; 
        t[id*2+1].rem +=x; 
        t[id*2].rem +=x; 
        t[id].rem = 0; 
    }
    int m = (l+r)/2; 
    update(id*2,l,m,u,v,val); 
    update(id*2+1,m+1,r,u,v,val); 
    t[id].mi = min(t[id*2].mi,t[id*2+1].mi); 
}
int get(int id, int l, int r, int u, int v) 
{
    if (r<u || l>v) return INT_MAX; 
    if (l>=u && r<=v) 
    {
        return t[id].mi; 
    }
    if (t[id].rem != 0) 
    {
        t[id*2].mi += t[id].rem; 
        t[id*2+1].mi += t[id].rem; 
        t[id*2].rem += t[id].rem; 
        t[id*2+1].rem += t[id].rem; 
        t[id].rem = 0; 
    }
    int m = (l+r)/2; 
    int t1 = get(id*2,l,m,u,v); 
    int t2 = get(id*2+1,m+1,r,u,v); 
    return min(t1,t2); 
}
int main() 
{
    cin>>n; 
    for (int i=1; i<=n; i++) 
    {
        int x; cin>>x; 
        update(1,1,n,i,i,x); 
    }
    cout<<"Nhap truy van: "; 
    int q; cin>>q; 
    while (q--) 
    {
        int l,r,val; 
        cin>>l>>r>>val; 
        update(1,1,n,l,r,val); 
        cout<<get(1,1,n,l,r)<<endl; 
    }
}