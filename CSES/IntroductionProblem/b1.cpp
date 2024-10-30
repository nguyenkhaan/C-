#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long long n; 
    cin>>n; 
    if (n == 1) {
        cout<<n; 
        return; 
    }
    while (n != 1) 
    {
        cout<<n<<" "; 
        if (!(n & 1)) n /= 2; 
        else n = n*3 + 1; 
    }
    cout<<n; 
}
int main() 
{
    solve(); 
}