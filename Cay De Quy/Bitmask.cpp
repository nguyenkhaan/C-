//Viet chuong trinh in ra day nhi phan tu 0000 toi 1111 (su dung quay lui) 
//Su dung bitmask va ham substr de liet ke day nhi phan 
//So lan xuat hien cua so 1 tai vi tri 1 la 2^(n-1) 
#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int n; 
    cin>>n; 
    vector<string> a; 
    int cnt1 = 0; 
    int cnt11 = 0; 
    int cnt111 = 0; 
    for (long i = 0; i< (1<<n); ++i) 
    {
        bitset<32> binary(i); 
        if (binary[0] == 1) cnt1++; 
        if (binary[1] == 1) cnt11++; 
        if (binary[2] == 1) cnt111++; 
        a.push_back(binary.to_string().substr(32 - n)); //khong de gi thi substr mac dinh a ki tu cuoi 
    }
    cout<<cnt1<<"   "<<cnt111<<endl; 
}
int main() 
{
    solve(); 
}