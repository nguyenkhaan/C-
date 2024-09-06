#include <stdio.h> 
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string a; 
    string b; 
    set<char> c;
    cin>>a;   int m = a.size(); 
    cin>>b;   int n = b.size(); 
    for (int i=0; i<n; i++) c.insert(b[i]); //Dua cac ki tu cua chuoi b vao tap hop 
    int l = 0; 
    int r = n - 1;  
    int g = 0; //Bien dem dung luu tru gia tri 
    for (int i=0; i<m; i++) if (c.find(a[i])!=c.end())
    {
        for (int j=l; j<=r; j++) 
        {
            if (a[i] == b[j])
            { 
                l = j; 
                g++; 
                b[j] = '0'; 
                break; 
            }
        }
    } 
    cout<<m+n-g<<endl; 
} 
int main()
{
    int t; cin>>t; 
    for(int j=0; j<t; j++) solve(); 
    return 0; 
}