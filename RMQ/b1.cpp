/*
Cho mang co n phần tử : 
1   3  2  8  6  7  4  5
Cho q truy vấn: 
- l - r: Giá trị nhỏ nhất từ l - r trên a[i]
f[i][j] = số nhỏ nhất trong đoạn từ i và có độ dài là 2^j 
f[1]0] 
f[1][1] : trên đoạn có độ dài là 2 
f[1][2]: số nhỏ nhất trên đoạn bắt đầu là 1, độ dài là 4 
f[i][j] = min(f[i][j-1],f[i+(1<<j-1)][j-1]); 
*/
#include <bits/stdc++.h>
using namespace std; 
#define maxn 10000
int n,a[maxn],f[maxn][21]; 
int main()
{
    cin>>n; 
    for (int i = 1; i<=n; i++) cin>>a[i], f[i][0] = a[i]; //Dau phay tuong duong hai lenh lien ke nhau 
    for (int j = 1; (1<<j)<=n; j++) 
    {
        for (int i = 1; i + (1<<j-1)<=n; i++) //Phai co -1 thi no moi dung 
        {
            f[i][j] = min(f[i][j-1], f[i+(1<<j-1)][j-1] ); 
        }
    }
    for (int i = 1; i<=n; i++) 
    {
        for (int j = 1; (1<<j)<=n; j++) cout<<i<<"    "<<j<<"     "<<f[i][j]<<endl; 
    }
}