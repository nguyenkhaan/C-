#include <bits/stdc++.h>
using namespace std; 
#define int long long
const int maxn = 2e5 + 5; 
int f[maxn][22]; 
int get(int l, int r) 
{
    if (l > r) return -1;  // Fix invalid range
    int k = log2(r - l + 1); 
    return max(f[l][k], f[r - (1 << k) + 1][k]); 
}

void rmq(vector<int> &a, int m) 
{
    for (int i = 1; i <= m; i++) 
        f[i][0] = a[i]; 
    for (int j = 1; (1 << j) <= m; j++) 
    {
        for (int i = 1; i + (1 << j) - 1 <= m; i++) 
        {
            f[i][j] = max(f[i][j-1], f[i + (1 << (j-1))][j-1]); 
        }
    }
}

void solve() 
{
    int n, k; 
    cin >> n >> k; 
    vector<int> a(n + 1); 
    vector<int> b; 
    vector<int> p(n + 1, 0); 
    for (int i = 1; i <= n; ++i) {
        cin >> a[i]; 
        p[i] = p[i-1] + a[i]; // Prefix sum
    }
    for (int i = 1; i + k - 1 <= n; ++i) 
    {
        b.push_back(p[i + k - 1] - p[i - 1]); 
    }
    int m = b.size(); 
    b.insert(b.begin(), 0); 
    rmq(b, m); 
    int ans = 1e18; 
    for (int i = 1; i <= m; ++i)
    {
        int left = get(1, i - k); 
        int right = get(i + k, m); 
        if (left != -1 && right != -1) ans = min(ans,max(left,right)); 
        else if (left == -1 && right != -1) ans = min(ans,right); 
        else if (right == -1 && left != -1) ans = min(ans,left); 
    }
    cout<<ans; 
}

signed main() 
{
    solve(); 
}
