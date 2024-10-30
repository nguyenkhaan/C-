#include <bits/stdc++.h>
using namespace std; 
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
void solve() 
{
    int n; 
    cin >> n; 
    double pi; 
    for (int i = 0; i <= n; ++i) pi += ((pow(-1,i) / (2*i + 1))*1.0); 
    cout<<4.0*pi; 
}
int main() 
{
    solve(); 
}