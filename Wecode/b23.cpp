#include <bits/stdc++.h>
using namespace std;  
#pragma GCC optimize("O2") 
#pragma GCC optimize("inline-functions") 
#define YES cout<<"Win" 
#define NO cout<<"Lose" 
void solve() 
{
    string s; 
    cin >> s; 
    if (s[0] == s[s.size() - 1]) {
        NO; 
        return; 
    }
    if (s.size() == 2 && s[0] != s[1]) {
        YES; 
        return; 
    }
    bool flag = 1; 
    for (int i = 1; i < s.size() - 1; ++i) if (s[i] != s[i+1]) {flag = 0; break;} 
    if (flag && s[0] != s[s.size() - 1]) {
        YES; 
        return; 
    }
    string s1 = string(1,s[0]) + string(1,s[s.size() - 1]); 
    for (int L = 1, R = L + 1; R  < s.size(); ++L, ++R) {
        string temp = string(1,s[L]) + string(1,s[R]); 
        if (temp == s1) {
            YES; 
            return; 
        }
    }
    NO; 
}
int main() 
{
    solve(); 
}