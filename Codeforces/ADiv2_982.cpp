#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
const int maxN = 1000; 
void solve() 
{
    int n; 
    cin >> n;  
    int a[maxN]; 
    int b[maxN]; 
    int maxw = 0 , maxh = 0; 
    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>b[i]; 
        maxw = max(maxw,a[i]); 
        maxh = max(maxh,b[i]); 
    }
    cout<<abs(2*maxw + 2*maxh)<<endl; 
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}