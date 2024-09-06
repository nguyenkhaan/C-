//Viet chuong trinh in ra day nhi phan tu 0000 toi 1111 (su dung quay lui) 
#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int n; 
    cin>>n; 
    vector<string> a; 
    for (long i = 0; i< (1<<n); ++i) 
    {
        bitset<32> binary(i); 
        a.push_back(binary.to_string().substr(32 - n)); //khong de gi thi substr mac dinh a ki tu cuoi 
    }
    for (auto s : a) cout<<s<<endl; 
}