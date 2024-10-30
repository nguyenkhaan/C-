#include <bits/stdc++.h> 
using namespace std; 
int divisor(int n) 
{
    int d = 0; 
    for (int i = 1; i*i <= n; ++i) if (n % i == 0) {
        if (i == n / i) ++d; 
        else d += 2; 
    }
    return d; 
}
void solve() 
{
    int n; 
    cin>>n; 
    int res = 0; 
    for (int i = 1; i < n; ++i) 
    {
        int a = i; 
        int b = n - i; 
        res += divisor(a) * divisor(b); 
    }
    cout<<res<<endl; 
}
int main() 
{
    solve(); 
}