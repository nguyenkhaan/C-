#include <bits/stdc++.h>
using namespace std;
#define int long long
set<int> se;
const int maxN = 1e6 + 5; 
bool f[maxN];

int32_t main() { 
    int n, x;
    cin >> n >> x;
    if (2*x > n*(n + 1)) return cout<<"-1" , 0; 
    int m1 = n, m2 = n - 1;
    memset(f, 0, sizeof(f));
    for(int i = 1; i <= n - 2; i++) se.insert(i);
    int ok = 1;
    while(x > 0){
        if(se.empty()) return cout << -1, 0;
        
        auto it = se.upper_bound(x);
        if(it == se.begin()){
            ok = 0;    
            break;
        }
        --it;
        int val = *it;
        x -= val;
        f[m2 - val] = 1;
        se.erase(it);
    }
    
    if (x != 0) {
        cout << -1;
        return 0;
    }
    
    cout << n << " ";
    for(int i = 1; i < m2; i++) if(f[i]) cout << i << " ";
    cout << n - 1 << " ";
    
    memset(f, 0, sizeof(f));
    for(auto x : se) f[m2 - x] = 1;
    for(int i = m2 - 1; i >= 1; i--) if(f[i]) cout << i << " ";
    
    return 0;
}
