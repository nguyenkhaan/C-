#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O2") 
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define YES cout<<"yes \n" 
#define NO cout<<"no \n"
void solve() 
{
    int n; cin>>n; 
    string s;  
    cin >>s; 
    if (s[0] == s[s.size() - 1]) NO; 
    else YES;  
}
int main() 
{
    fast; 
    int tc; 
    cin>>tc; 
    while (tc--) solve(); 
}