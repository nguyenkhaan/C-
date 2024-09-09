#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int a,b; 
    cin>>a>>b;
    if (a < b) {int t = a; a = b; b = t;} 
    if (a % 2 != 0 && b % 2 != 0) {
        cout<<"no"<<endl; 
        return; 
    }
    if (a % 2 == 0 && a / 2 == b && b % 2 != 0) cout<<"no"<<endl; 
    else cout<<"yes"<<endl; 
}
int main() 
{
    int t; cin>>t; 
    while (t--) solve(); 
}