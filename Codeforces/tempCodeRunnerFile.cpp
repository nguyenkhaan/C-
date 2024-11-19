#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O2") 
#pragma GCC optimize("inline-functions") 
#pragma GCC optimize("fast-math")  
#define int long long 
const int maxN = 1e6; 
#define all(a) a.begin(),a.end() 
#define For(a,b,c) for(a = b; a < c; ++a) 
int binary_search(int l, int r, vector<int> &a) 
{
    int ans = -1; 
    while (l <= r) 
    {
        int mid = (l + r)/2; 
        if (a[0] + a[mid] > a[a.size()-1]) {
            ans = mid; 
            r = mid - 1; 
        }
        else l = mid + 1; 
    }
    return ans; 
}
void solve() 
{
    int n; 
    cin >> n; 
    int i; 
    vector<int> a(n); 
    For(i,0,n) cin >> a[i]; 
    sort(all(a)); 
    int res = 0; 
    For(i,0,n) 
    {
        if (a[0] + a[1] <= a[n - 1]) {
            a[0] = a[binary_search(0,n-1,a)]; 
            ++res; 
        }
        sort(all(a)); 
    }
    cout<<res<<endl; 
} 
signed main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}
    