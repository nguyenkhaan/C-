#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int a,b,c,d; 
    cin>>a>>b>>c>>d; 
    if (c == d) {
        cout<<"no"<<endl; 
        return; 
    }
    if (a < b) {
        int t = a; a = b; b = t; 
        t = c; c = d; d = t; 
    }
    if (c > d) {
        cout<<"yes"<<endl; 
    }
    else cout<<"no"<<endl; 
}
int main() 
{
    int t; 
    cin>>t; 
    while (t--) solve();
}