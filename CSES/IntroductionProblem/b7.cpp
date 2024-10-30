#include <bits/stdc++.h>
using namespace std; 
#define int long long 
int calc(int k) 
{
    int a = k*k*(k*k - 1)/2; 
    int b = 4 * (k - 1) * (k - 2); 
    return a - b; 
}
void solve() 
{
    int k;
    cin >> k; 
    for (int i = 1; i <= k; ++i) 
    {
        cout<<calc(i)<<endl; 
    }
}
main() 
{
    solve(); 
}