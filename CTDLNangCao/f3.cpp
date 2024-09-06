/* 
Dem so cap nghich the 
Goi t[x] la so lan xuat hien cua phan tu x trong mang 
*/
#include <stdio.h> 
#include <iostream>
#include <bitset> 
#include <cstring> 
using namespace std; 
#define MAX 1000 
int n,a[MAX]; 
int t[1000]; 
void update(int pos, int val) 
{
    while (pos<=n) 
    {
        t[pos] += val; 
        pos += pos & (-pos);  
    }
}
int get(int pos) 
{
    int ans = 0; 
    while (pos) 
    {
        ans += t[pos]; 
        pos -= pos & (-pos); 
    }
    return ans; 
}
int main() 
{
    memset(t,0,sizeof(t)); 
    cin>>n; 
    for (int i=1; i<=n; i++) 
    {
        cin>>a[i]; 
    }
    int sum = 0; 
    for (int i=n; (~i)+1; i--) 
    {
        sum+=get(a[i]-1);
        //Khi goi ham get thi no se lay bieu thuc tu 1 -> x truyen vao  
        update(a[i],1); 
        //Khi goi update thi no se update tu x -> n truyen vao 
    }
    cout<<sum; 
}
