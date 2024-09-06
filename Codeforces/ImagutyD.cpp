#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
#include <string> 
using namespace std;  
/*
N: sang phải 1 đơn vị 
S: sang trái 1 đơn vị 
E: lên trên 1 đơn vị 
W: xuống dưới 1 đơn vị 
*/
void solve() 
{
    string s;  cin>>s; 
    int n = strlen(s); 
    vector<int> A; 
    vector<int> B; 
    vector<int> C; 
    vector<int> D;
    for (int i=0; i<n; i++) 
    {
        if (s[i] == 'N') A.push_back(1); //a
        if (s[i] == 'W') B.push_back(-1);  //b
        if (s[i] == 'E') C.push_back(1);  //c
        if (s[i] == 'S') D.push_back(-1);  //d 
        pair<int,int> x; 
        pair<int,int> y;
        int a = 0, b = 0, c = 0, d = 0; 
        for (int i=0; i<n; i++) 
        {
            if (s[i] == 'N') 
            {
                if (x.first <= x.second) x.first += A[a]; 
                else x.second += A[a]; 
                a++; 
            }
            if (s[i] == 'S')
            {
                if (x.first >= x.second) x.first += D[d]; 
                else x.second += D[d]; 
                d++; 
            }
            if (s[i] == 'W')
            {
                if (y.first >= y.second) y.first += B[b]; 
                else y.second += B[b]; 
                b++; 
            }
            if (s[i] == 'E')
            {
                if (y.first <= y.second) y.first += C[c];
                else y.second += C[c]; 
                c++; 
            }
        }
    }
    cout<<x.first<<" "<<x.second<<"  "<<y.first<<"  "<<y.second;
    if ((x.first == x.second) && (y.first ==y.second)) cout<<"YES"; 
    else cout<<"NO"; 
}
int main() 
{
    
}