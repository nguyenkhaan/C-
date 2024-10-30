#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#define no cout<<"NO SOLUTION" 
#define For(a,b,c) for(a = (b); a <= (c); ++a)
void solve() 
{
    int n; 
    cin >> n; 
    if (n >=2 && n <= 3)  
    {
        no; 
        return; 
    }
    if (n == 1) {
        cout<<"1"; 
        return; 
    }
    int i; 
    string s = "4 2 5 3 1 "; 
    int m = n; 
    while (m - 5 > 0) 
    {
        for (int i = 6; i <= n; i += 2) {
            --m;  
            cout<<i<<" "; 
        } 
        cout<<s; 
        for (int i = 7; i <= n; i += 2) {
            --m; 
            cout<<i<<" "; 
        }
    }
    if (n == 5) cout<<s; 
    if (m == 4) cout<<"2 4 1 3"; 
}
 main() 
 {
    solve(); 
    return 0;
 }