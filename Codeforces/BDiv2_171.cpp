#include <bits/stdc++.h>
using namespace std; 
const int maxN = 1e9;
#pragma GCC optimize("O3") 
#define For(a,b,c) for(a = b; a <= b; ++a)  
const int INF = 1e5; 
int a[maxN],n; 
int ans = INF; 
void binary_search(int l, int r) 
{
    while (l < r) 
    {
        int mid = (l + r)/2; 
        int d = 0; 
        for (int i = 2; i < n; ++i) {
            if (abs(a[i] - a[i-1]) 
        }
    }
}
void solve() 
{
    
    cin >> n; 
    int i; 
    For(i,0,n-1) cin >> a[i]; 
    sort(a , a + n - 1); 

}