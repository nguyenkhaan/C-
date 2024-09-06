//Bai toan Robot tim duong trong ma tran 
//O o duoi co so 1 thi robot co the di xuong. O co so 0 thi robot khong the di. Chi co the di sang phai hoac trai 
/*
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1
*/
#include <stdbool.h>
#include <iostream> 
#include <string> 
#include <bits/stdc++.h>
using namespace std; 
int a[100][100]; 
int n; 
bool check = false; 
void nhap() 
{
    cin>>n; 
    for (int i=1; i<=n; i++) 
    {
        for (int j=1; j<=n; j++) cin>>a[i][j]; 
    }
}
void Try(int i, int j, vector<char> s) 
{
    if (i==n && j==n) 
    {
        for (int h=0; h<s.size(); h++) cout<<s[h]; 
        check = true; 
        return; 
    }
    if (i<n && a[i+1][j] == 1) 
    {
        s.push_back('D');
        Try(i+1,j,s); 
    }
    if (j<n && a[i][j+1] == 1) 
    {
        s.push_back('R');
        Try(i,j+1,s);
    }
    if (i>n || j>n || a[i][j] == 0) return; 
}
int main() 
{
    vector<char> s; 
    nhap(); 
    Try(1,1,s); 
    if (check == false) cout<<"NO"; 
}