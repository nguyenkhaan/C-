#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
void solve() 
{
    int n; 
    cin >> n;  
    int slide = 2; 
    int a[n + 1]; 
    a[0] = 0; 
    a[1] = 1; 
    for (int i = 2; i <= n; ++i) a[i] = i + a[i-1];
    int d = 0;  
    for (int k = 2; k <= n; ++k) 
    {
        for (int L = 1,R = L + k - 1; R <= n; ++R,++L) if (a[R] - a[L-1] == n) ++d; 
    }
    cout<<d; 
}
int main() 
{
    solve(); 
}