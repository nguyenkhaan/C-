#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    for (int i = 2; i <= n; i += 2) {
        cout<<i<<" "; 
    } cout<<endl;
    if (!(n & 1)) --n;  
    for (int i = n; i >= 1; i -= 2) {
        cout<<i<<" "; 
    } cout<<endl; 
    cout<<"Done"; 
}