#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int k; 
    cin >> k; 
    cin.ignore(); 
    string s; 
    getline(cin,s); 
    for (int i = 0; i < s.size(); ++i) if (s[i] >= 'A' && s[i] <= 'Z') {
        s[i] = (char)((((int)s[i] - 65 + k) % 26) + 65); 
    }
    cout<<s; 
}
int main() 
{
    solve(); 
}