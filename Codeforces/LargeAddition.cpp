#include <stdio.h> 
#include <iostream>
#include <string> 
#include <stdlib.h>
#include <stdbool.h>
using namespace std; 
bool kiem_tra(string s) 
{
    if ((s[0] == '1') && (s[s.size()-1]!='9')) 
    {
        for (int i=1; i<s.size()-1; i++) if (s[i] == '0') return false; 
        return true; 
    }
    return false; 
}
int main() 
{
    long long int t; cin>>t;
    for (long long int i = 0; i<t; i++)
    {
    string a; cin>>a;
    bool m = kiem_tra(a); 
    if (m==true) cout<<"Yes"<<endl; 
    else cout<<"No"<<endl; 
    }
}