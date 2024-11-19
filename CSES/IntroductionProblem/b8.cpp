#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#define NO cout<<"NO \n" 
#define YES cout<<"YES \n"
#define endl cout<<"\n"
void solve() 
{
    int n; 
    cin >> n; 
    int sum = n*(n + 1)/2; 
    if (sum & 1) {
        NO; 
        return; 
    }
    YES; 
    sum /= 2; 
    
}