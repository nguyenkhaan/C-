#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    int beg; 
    for (beg = 1; beg <= n; ++beg) cout<<beg<<' '; 
    if (beg >= 10) 
    {
        cout<<endl; 
        for (beg = 10; beg <= n; beg += 5) cout<<beg<<' '; 
        cout<<endl; 
        for (beg = 20; beg <= n; beg += 10) cout<<beg<<' '; 
    } 
}