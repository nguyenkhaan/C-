#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    long long n; 
    cin>>n; 
    long long sum = n*(n+1)/2; 
    long long s = 0; 
    for (long long i = 0; i < n - 1; ++i) {
        long long x; 
        cin>>x; 
        s += x; 
    }
    cout<<(sum - s); 
}
int main() 
{
    solve(); 
}