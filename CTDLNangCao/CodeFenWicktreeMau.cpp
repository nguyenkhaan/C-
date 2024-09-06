#include <iostream> 
#include <stdio.h> 
#include <bits/stdc++.h>
using namespace std; 
int n; 
int a[1000]; 
long long t[1000]; 
//t[i] chua tong cac so ket thuc tai i, co do dai la 2^j voi j la bit 1 cuoi cung cua i 
void update(int x, int val) 
{
    while (x<=n) 
    {
        t[x] += val; 
        x += x & (-x); 
    }
}
long long get(int x) 
{
    long long ans = 0; 
    while (x) 
    {
        ans+=t[x]; 
        x -= x & (-x); 
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
    int q; 
    cin>>q; 
    while (q--) 
    {
        int op,x,val; 
        cin>>op>>x; 
        if (op == 1) 
        {
            cin>>val; 

        }
        else 
        {
            cout<<get(x)<<endl; 
            //Tinh tong 
        }
    }
    /*
    KL: Sau khi sử dụng hàm get và hàm update, nhận được 
    +) get: lấy được tổng của các số từ a1 - a[x]
    +) 
    */
}