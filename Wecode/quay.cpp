#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#define int long long 
void solve() 
{
    string s; 
    cin >> s; 
    if (s == "") {
        cout<<"0"; 
        return; 
    }
    stack<int> st; 
    int ans = 0; 
    for (int i = 0; i < s.size(); ++i) 
    {
        if (s[i] == 'A' && st.empty()) ++ans; 
        if ((s[i] == 'R' || s[i] == 'L') && (!st.empty())) {
            st.pop(); 
            ++ans; 
        }
        if ((s[i] == 'R' || s[i] == 'L') && (st.empty())) st.push(1);  
    }
    cout<<ans; 
}
signed main() 
{
    solve(); 
}