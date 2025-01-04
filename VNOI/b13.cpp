#include <bits/stdc++.h>
using namespace std;
#define int long long
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define       all(x)    x.begin(), x.end()
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9; 
void solve()
{
    //freopen("input.inp" ,"r", stdin);
    //freopen("brute_out.out","w",stdout); 
    int n; 
    cin >> n; 
    int d = 1; 
    while (n > 3) {
        d *= 2; 
        n /= 4; 
    }
    cout << d << endl; 
}
signed main()
{
    fast;
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 

}
/*   /\_/\
*   (= ._.)
*   / >  \>
*/
