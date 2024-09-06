#include <bits/stdc++.h>
using namespace std;
const int64_t mod = 1000000000000000003;
const int64_t INV6 = 833333333333333336;
const int64_t INV2 = 500000000000000002;
int64_t bm(int64_t a, int64_t b) {
    int64_t res = 0;
    while (b > 0) {
        if (b & 1) res = (res + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return res;
}

void solve() 
{
    int64_t n; cin >> n;
    int64_t X = bm(n, n);
    X = bm(X, n + 1);
    X = bm(X, n + 1);
    X = bm(X, INV2);
    X = bm(X, INV2);

    int64_t Y = bm(n,n+ 1);
    Y = bm(Y, 2LL * n + 1);
    Y = bm(Y, INV6);

    int64_t ans = (X + Y) % mod;
    ans = bm(ans, INV2);
    cout << ans << '\n';
}
int main() 
{
    long T; 
    cin>>T;
    while (T--) solve(); 
}