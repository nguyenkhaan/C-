#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#define endl cout<<"\n"
void solve() 
{
    int n; 
    cin >> n; 
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) cout<<"*"; 
        endl; 
    }
    for (int i = n; i >= 1; --i) {
        for (int j = i; j >= 1; --j) cout<<"*"; 
        endl; 
    }
}
int main() 
{
    solve(); 
}