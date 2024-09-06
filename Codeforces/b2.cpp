#include <stdio.h> 
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std; 
string a; 
string b;
vector<int> c; 
void nhap(int *m, int *n)
{
    cin>>*n>>*m; 
    cin>>a; 
    for (int i=0; i<*m; i++) 
    {
        int x; cin>>x; 
        c.push_back(x); 
    }
    cin>>b; 
}
void solve() 
{
    int m,n; 
    nhap(&m,&n); 
    multiset<int> index; 
    multiset<char> character; 
    for (int i=0; i<m; i++) 
    {
        index.insert(c[i]); 
        character.insert(b[i]); 
    }
    for (char x:character) cout<<x<<"  "; 
    multiset<int>::iterator p1 = index.end(); 
    multiset<char>::iterator p2 = character.end(); 
    map<int,char> mp; 
    for (int i=0; i<m; i++) 
    {
        advance(p1,-1); 
        advance(p2,-1);
        mp[*p1] = *p2; 
    }
    for (pair<int,char> x: mp) 
    {
        int y = x.first; //Vi tri duoc thay the 
        char ch = x.second; //Ki tu can thay the 
        a[y-1] = ch;
    }
}
int main() 
{
    solve(); 
    return 0;  
}