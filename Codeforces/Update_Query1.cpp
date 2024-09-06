#include <stdio.h> 
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int m,n; cin>>n>>m; 
    cout<<"Nhap chuoi thu 1: "; 
    string a; 
    cin>>a; 
    cout<<"Nhap chuoi thu 2: "; 
    string b; 
    cin>>b; 
    vector<int> c(m); 
    for (int i=0; i<m; i++) cin>>c[i]; 
    multiset<int> index; 
    multiset<char> character; 
    for (int i=0; i<m; i++) 
    {
        index.insert(c[i]); 
        character.insert(b[i]); 
    }
    multiset<int>::iterator p1 = index.end(); 
    multiset<char>::iterator p2 = character.end(); 
    map<int,char> mp; 
    for (int i=0; i<m; i++) 
    {
        advance(p1,-1); 
        advance(p2,-1);
        mp[*p1] = *p2; 
    }
    //Thay the gia tri trong chuoi a nua la xong roi 
    for (pair<int,char> x: mp) 
    {
        int y = x.first; //Vi tri duoc thay the 
        char ch = x.second; //Ki tu can thay the 
        a[y] = ch;
    }
    cout<<a; 
    return 0;  
}