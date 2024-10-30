#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string s; 
    cin>>s; 
    s += string(1,'a'); 
    long long n = s.size();
    long long res = 0; 
    long long d = 1;  
    for (int i = 1; i < n; ++i)
    {
        if (s[i] != s[i-1]) {
            res = max(res , d); 
            d = 1; 
        }
        else ++d; 
    }
    cout<<res; 
}
int main() 
{
    solve(); 
}