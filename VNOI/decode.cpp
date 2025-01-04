#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string s; 
    getline(cin,s);  
    string s1 = ""; 
    string s2 = ""; 
    for (int i = s.size() - 1; i >= 0; i -=2)
    {
        if (i >= 1) s1 += string(1,s[i-1]); 
        if (i >= 0) s2 = string(1,s[i]) + s2; 
    }
    cout<<s1<<s2<<endl; 
}
int main() 
{
    solve(); 
}