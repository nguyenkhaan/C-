#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4;   
//#define int long long 
#define An UwU 
int a[maxn],n,k; 
bool t[maxn];
void Try(int i, vector<string> &s) 
{
    for (int j = a[i-1] + 1; j <= n - k + i; ++j) if (t[j]) {
        a[i] = j; 
        t[j] = false; 
        if (i == k) {
            for (int t = 1; t <= k; ++t) cout << s[a[t] - 1] << ' '; 
            cout << '\n'; 
        } else Try(i + 1,s); 
    t[j] = true;  
    }
}
void back_track(vector<string> &s) 
{
    a[0] = 0; 
    Try(1,s); 
}
void solve() 
{
    cin >> n >> k; 
    memset(t,true,sizeof(t)); 
    vector<string> s(n); 
    for (int i = 0; i < n; ++i) cin >> s[i]; 
    if (k > n) {
        cout << "Invalid..."; 
        return; 
    }
    back_track(s); 
}
int main() 
{
    solve(); 
}
/*   /\_/\
*   (= ._.)
*   / >  \>
*/