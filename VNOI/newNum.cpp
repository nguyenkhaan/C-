#include <bits/stdc++.h> 
using namespace std; 
#define int long long 
void solve() 
{
    string s; 
    cin >> s;  
    int sum = 0; 
    for (int i = 0; i < s.size(); ++i) sum += (s[i] - '0'); 
    string ans = ""; 
    for (int i = 0; i < s.size(); ++i) 
    {
        sum -= (s[i] - '0'); 
        char token = s[i]; 
        for (int j = 9; j >= 1; --j) if (j != s[i] - '0')
        {
            sum += j; 
            if (sum % 3 == 0) {
                s[i] = j + '0'; 
                if (ans < s) ans = s; 
            }
            sum -= j; 
        }
        s[i] = token; 
        sum += (s[i] - '0'); 
    }
    cout<<ans; 
}
signed main() 
{
    solve(); 
}