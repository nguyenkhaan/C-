#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n; 
    cin>>n; 
    vector<int> a(n); 
    for (int i = 0; i<n; ++i) cin>>a[i]; 
    int d = 3; 
    for (int i = 0; i<n; ++i) 
    {
        for (int j = i + 1; j<n; ++j) if (a[j] == i + 1 && a[i] == j + 1) 
        {
            d = 2; 
            break; 
        }
    }
    cout<<d<<endl; 
}
int main() 
{
    int t; 
    cin>>t; 
    while (t--) solve(); 
}