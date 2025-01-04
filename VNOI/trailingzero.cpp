#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string s1, s2; 
    cin >> s1 >> s2; 
    for (int i = 0; i < s1.size(); ++i) if (s1[i] != s2[i]) {
        cout << i; 
        return; 
    }
}
int main() 
{
    solve(); 
}