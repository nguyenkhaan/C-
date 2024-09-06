#include <stdio.h>
#include <string> 
#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
int main() 
{
    string s; cin>>s; 
    pair<int, int> p; 
    for (int i=0; i<s.size(); i++) 
    {
        int x = s[i] - '0'; 
        if (x % 2 ==0) p.first++; 
        else p.second++; 
    }
    if (p.first == p.second) cout<<"Yes"; 
    else cout<<"no"; 
}