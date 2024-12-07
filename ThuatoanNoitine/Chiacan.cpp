
#include <bits/stdc++.h>
using namespace std; 
#define MAX 10000
int n; 
/*
Tư tưởng là ta chia đoạn gồm N phần tử thành căn N đoạn con. Mỗi đoạnn con có S phần 
tử. Đâu đó sẽ lòi ra đoạn dư...Dùng để giải quyết cho bài toán có Q truy vấn 
dạng l,r,x. 
Block: id = (i+s-1)/s; 
Endl: s*(l/s) + s 
Start r: s*(l/s) +1 
*/
int id(int i,int s)
{
    return (i+s-1)/s; 
}
int tinh_tong(int a[],int l, int r)
{
    int b[MAX]; 
    for (int i=0; i<MAX; i++) b[i] = 0; 
    int s = sqrt(n); 
    for (int i=1; i<=n; i++) 
    {
        b[id(i,s)] += a[i]; 
    }
    int sum = 0; 
    int idl = id(l,s);
    int idr = id(r,s); 
    for (int i = idl+1; i<=idr-1; i++) sum+=b[i];
    int Endl = id(l,s)*s; 
    for (int i=l; i<=Endl; i++) sum+=a[i]; 
    int Startr = s*id(r,s)-(s-1); 
    for (int i = Startr; i<=r; i++) sum+=a[i]; 
    return sum; 

}
int main()
{
    cin>>n; 
    int *a = new int[MAX]; 
    for (int i=1; i<=n; i++) cin>>a[i]; 
    //Cho q truy van, moi truy van co dang l,r. Tinh tong trong doan l,r
    cout<<"Nhap so truy van: "; 
    int q; cin>>q;
    for (int j=0; j<q; j++) 
    {
        int l; cin>>l; 
        int r; cin>>r; 
        cout<<tinh_tong(a,l,r)<<endl;
    } 
}