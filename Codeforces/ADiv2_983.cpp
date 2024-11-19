#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
void solve() 
{
    int n; 
    cin >> n;  
    vector<int> a(1+2*n); 
    int n1 = 0; 
    int n0 = 0;  
    for (int i = 0; i < 2*n; ++i) 
    {
        cin >> a[i]; 
        if (a[i] == 1) ++n1; 
        else ++n0; 
    }
    if (n1 % 2 == 0 && n0 % 2 == 0) cout<<"0"<<" "; 
    else cout<<"1"<<" "; 
    cout<<min(n1,n0)<<endl; 
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}