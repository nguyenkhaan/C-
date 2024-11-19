#include <bits/stdc++.h>
using namespace std; 
const unsigned long long maxN = 4e18;
unsigned long long a, k, b, m, n; 

unsigned long long binary_search(unsigned long long l, unsigned long long r) {
    unsigned long long ans = r;
    while (l <= r) {
        unsigned long long mid = l + (r - l) / 2;
        unsigned long long relaxA = mid / k; 
        unsigned long long relaxB = mid / m; 
        
        unsigned long long effectiveA = (mid - relaxA);
        unsigned long long effectiveB = (mid - relaxB);
        
        if (effectiveA > n / a || effectiveB > n / b) {
            ans = mid; 
            r = mid - 1; 
        } else {
            unsigned long long total = effectiveA * a + effectiveB * b;
            if (total >= n) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    return ans;
}

void solve() {
    cin >> a >> k >> b >> m >> n;
    cout << binary_search(0, maxN) << endl;
}

signed main() {
    solve();
}
