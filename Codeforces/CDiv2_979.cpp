#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"yes"<<endl 
#define NO cout<<"no"<<endl 
void solve() 
{
    int n; 
    cin >> n; 
    string s; 
    cin >> s; 
    vector<int> a(n,0); 
    for (int i = 0; i < n; ++i) if (s[i] == '1') a[i] = 1; 
    bool win = false; 
    //Alice chi thang trong hai truong hop 
    if (a[0] == 1 || a[n-1] == 1) win = true; 
    for (int i = 1; i < n; ++i) if (a[i] == 1 && a[i-1] == 1) win = true; 
    if (win) YES; 
    else NO; 
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}