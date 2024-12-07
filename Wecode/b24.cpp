#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n,a,b,c; 
    cin >> n >> a >> b >> c; 
    int mod = n - a - b - c; 
    if (mod > 0) c += mod; 
    string ans = ""; 
    for (int i = 0; i < a; ++i) {
        if (i % 2 == 0) ans += "A"; 
        else ans += "B"; 
    }
    for (int i = 0; i < b; ++i) {
        if (i % 2 == 0) ans += "a"; 
        else ans += "b"; 
    }
    for (int i = 0; i < c; ++i) {
        if (i % 2 == 0) ans += "0"; 
        else ans += "1";
    }
    cout<<ans; 
}
int main() 
{
    solve(); 
}