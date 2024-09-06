#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    string s; 
    cin>>s; 
    bool ok = true; 
    stack<int> bracket; 
    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] == '(') bracket.push(1); 
        else if (s[i] == ')' && bracket.empty() != true) bracket.pop(); 
    }
    if (bracket.empty()) cout<<"HOP LE"; 
    else cout<<"KHONG HOP LE"; 
}