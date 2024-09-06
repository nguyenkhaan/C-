/* 
Xét bài toán: Cho truy vấn: 
l x v: Tăng phần tử a[x] lên v đơn vị và in ra tổng của các phần tử từ 1...x-1 
*/
#include <stdio.h> 
#include <iostream>
using namespace std; 
int t[1000]; 
int n; 
int a[1000]; 
void update(int pos, int val) 
{
    while (pos<n) 
    {
        t[pos] += val; 
        pos += pos&(-pos); 
    }
}
int get(int pos) 
{
    int ans(0); 
    while (pos) 
    {
        ans += t[pos]; 
        pos -= pos & (-pos); 
    }
    return ans; 
}
int main() 
{
    cin>>n; 
    for (int i=1; i<=n; i++) 
    {
        cin>>a[i]; 
        update(i,a[i]); 
    }
    int q; 
    cin>>q; 
    while (q--) 
    {
        int pos,val;  
        cin>>pos>>val; 
        update(pos,val); 
        cout<<get(pos); 
    }
}
