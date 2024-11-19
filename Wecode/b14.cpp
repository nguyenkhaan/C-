#include <bits/stdc++.h>
using namespace std; 
#define int long long 
const int INF = 1e18; 
int n,k;  
pair<int,int> check(vector<int> &a, int mid) 
{
    int count = 0 , sum = 0;
    for (int i = 0; i < a.size(); ++i) 
    {
        if (a[i] > mid) return {false,0};  
        sum += a[i]; 
        if (sum > mid) {
            ++count; 
            sum = a[i]; 
        }
    }
    ++count; 
    if (count <= k) return {true,count}; 
    return {false,0}; 
}
int _binary_search(int l, int r, vector<int> &a) 
{
    int ans = 0; 
    while (l <= r) 
    {
        int mid = (l + r) / 2; 
        pair<int,int> my_check = check(a,mid);  
        if (my_check.first) {
            ans = mid; 
            r = mid - 1; 
        } else l = mid + 1; 
    }
    return ans; 
}
void solve() 
{
    cin >> n >> k; 
    vector<int> a(n); 
    int s = 0; 
    int ma = 0; 
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
        s += a[i]; 
        ma = max(ma , a[i]); 
    }
    int ans = _binary_search(ma,s,a); 
    cout<<ans; 
}
signed main() 
{
    solve(); 
}