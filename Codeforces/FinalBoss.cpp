#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std; 
/*
1. Bài toán giả sử: Ta không có 1 cách tính nào ngoại trừ tính bthuong 
+) Duyệt full trường hợp (Bruteforce, Dynamic_Duyet) 
+) Giả sử trường hợp tổng quát và giải nhỏ bài toán dần dần 
+) Ứng dụng Binary Search 
2. Bài toán tìm tốyi ưu: Ta cố gắng tìm ra cách giải quyết tối ưu (Greed) 
hoặc tìm công thức giải nhanh, quy luật (quan trọng)... 
3. Bài toán hỗ trợ công cụ: Prefix Sum, Prefix Max, Min, Max,...
--> Nên mường tượng cách giải bài toán --> Đi vào các ví dụ tay ---> Áp dụng 
công cụ ---> Thực hiện tính toán
4. Bài toán ứng dụng toán học (có thể dùng vào 3 cái trên) 
*/
#define min(h,k) ((h<=k)?h:k)
typedef long long int lli; 
vector<lli> a; 
vector<lli> c; 
long long ans = LLONG_MAX; 
lli sum; 
void binary(lli first, lli last, lli h, lli n) 
{
    if (first<=last) 
    {
        lli mid = (first + last) / 2; 
        lli m = h - sum; 
        lli turns = mid-1; 
        for (lli i=0; i<n; i++) if (turns>=c[i])
        {
            lli x = turns / c[i]; 
            m-= x*a[i]; 
            if (m<=0) break; 
        } 
        if (m<=0) { ans = min(ans,mid);  binary(first,mid-1,h,n); }
        else if (m>0) binary(mid+1,last,h,n); 
    } 
}
int main() 
{
    int t; cin>>t; 
    for (int j=0; j<t; j++)
    {
        lli first = 1; 
        lli last = 100000000000; 
        lli n,h; cin>>h>>n;
        // cout<<"Nhap tuyet chieu: "<<endl;
        a.resize(n); 
        sum = 0; 
        for (int i=0; i<n; i++) 
        {
            cin>>a[i]; 
            sum+=a[i]; 
        }
 
        // cout<<"Nhap cooldown: "<<endl;
        c.resize(n);
        for (int i=0; i<n; i++) cin>>c[i]; 
        binary(first,last,h,n); 
        cout<<ans<<endl; 
        ans = LLONG_MAX; 
    }
}