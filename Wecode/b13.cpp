#include <bits/stdc++.h>
using namespace std;
#define int long long 
// #pragma GCC optimize("O2") 
// #pragma GCC optimize("fast-maths")
// #pragma GCC optimize("inline-function")  
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
const int MAX = 1e9; 
int cnt;
vector<pair<int,int>> res; 
int binary_search(int l, int r, vector<int> &a, vector<int> &b)
{
    int ans = -1;
    while (l <= r)
    {
        int mi = (l + r)/2;
        int p = 0;
        int d = 0;
        bool flag = true;
        vector<pair<int,int>> temp_res; 
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] >= mi) continue;
            int num = a[i];
            while (num + b[p] < mi && p < b.size()) ++p;
            if ((p >= b.size() && num < mi) || num + b[p] < mi) {
                flag = false;
                break;
            }
            temp_res.push_back(make_pair(i,p)); 
            ++p;
        }
        if (flag) {
            res = temp_res; 
            ans = mi;
            cnt = d;
            l = mi + 1;
        } else r = mi - 1;
    }
    return ans;
}
void solve()
{
    int n; 
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    int m;
    cin >> m;
    vector<int> b(m);
    for (auto &i : b) cin >> i;
    int ans = binary_search(1,MAX,a,b);
    cout<<ans<<" "<<res.size()<<endl; 
    for (auto z : res) cout<<z.first + 1<<" "<<z.second + 1<<endl; 
}
signed main()
{
    fast; 
    solve();
}