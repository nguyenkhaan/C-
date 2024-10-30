#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n; 
    cin >> n; 
    if (n == 1) {
        cout<<"0"<<endl; 
        return;
    }
    cout<<"1"; 
    for (int i = 0; i < n - 1; ++i) cout<<"0"; 
    cout<<endl; 
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}