#include <stdio.h> 
#include <iostream>
#include <string> 
int a[100][100]; //Do dai xau con doi xung dai nhat 
using namespace std; 
int main() 
{
    string s; cin>>s; 
    string s1 = ""; 
    for (int i=s.size()-1; i>=0; i--) s1+=string(1,s[i]); 
    s= "0"+s; 
    s1 = "0" + s1; 
    int n = s.size(); 
    for (int i=0; i<n; i++)
    {
        a[0][i] = 1; 
        a[i][0] = 1; 
    }
    for (int i=1; i<n; i++) 
    {
        for (int j=1; j<n; j++) 
        {
            if (s[i] == s1[j]) a[i][j] = a[i-1][j-1]+1;  
            else a[i][j] = max(a[i-1][j],a[i][j-1]); 
        }
    }
    cout<<a[n-1][n-1]-1; 
    return 0; 
}