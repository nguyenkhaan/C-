#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    for (int i = 0; i < n; ++i) cout<<'+'<<' '; 
    cout<<endl; 
    for (int i = 0; i < n; ++i) cout<<'-'<<' '; 
    cout<<endl; 
    for (int i = 0; i < 2*n; ++i) {
        if (i & 1) cout<<'-'<<' '; 
        else cout<<'+'<<' '; 
    }
}