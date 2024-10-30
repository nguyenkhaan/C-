#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#define For(a,b,c) for(a = b; a <= c; ++a)
#pragma GCC optimize("O3") 
const int maxN = 1e10; 
int n,x; 
int binary_search(vector<int> &a, int l, int r) 
{
    int ans = -1; 
    while (l <= r) 
    {
        int mid = (l + r) / 2; 
        int t = 0 , p_l = 0, p_r = n - 1; 
        while (p_l <= p_r) 
        {
            if (a[p_l] + a[p_r] <= x) {
                p_l++; 
                p_r--; 
                ++t; 
            } 
            else {
                p_r--; 
                ++t; 
            }
        }
        if (t < mid) r = mid - 1; 
        else if (t == mid) {
            ans = mid; 
            r = mid - 1; 
        }
        else l = mid + 1; 
    }
    return ans; 
}
signed main() 
{
    
    cin >> n >> x; 
    vector<int> a(n); 
    int i; 
    For(i,0,n-1) cin >> a[i];
    if (n == 1) {
        cout<<'1'; 
        return 0; 
    }
    sort(a.begin() , a.end());  
    int ans = binary_search(a,1,maxN); 
    cout<<ans; 
}