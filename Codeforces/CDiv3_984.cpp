#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"YES \n" 
#define NO cout<<"NO \n"
bool check_1100(string &s, int i, int n) 
{
    if (i < 0) return false; 
    if (i >= n - 3) return false; 
    if (s[i] == '1' && s[i + 1] == '1' && s[i+2] == '0' && s[i + 3] == '0') return true; 
    return false; 
}
void solve() 
{
    string s; 
    cin >> s; 
    int n = s.size(); 
    int count = 0; 
    int q; 
    cin >> q; 
    for (int i = 0; i < n; ++i) count += check_1100(s,i,n); 
    for (int i = 0; i < q; ++i) 
    {
        int x; char ch;
        cin >> x >> ch; 
        --x; 
        int before = check_1100(s,x,n) || check_1100(s,x-1,n) || check_1100(s,x-2,n) || check_1100(s,x-3,n); 
        s[x] = ch; 
        int after = check_1100(s,x,n) || check_1100(s,x-1,n) || check_1100(s,x-2,n) || check_1100(s,x-3,n); 
        count += (after - before); 
        if (count > 0) YES; 
        else NO; 

    }
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}