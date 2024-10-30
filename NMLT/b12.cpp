#include <bits/stdc++.h>
using namespace std;
//=====================//
#define           f     first
#define           s     second
#define           pb    push_back
#define           ep    emplace
#define           eb    emplace_back
#define           lb    lower_bound
#define           ub    upper_bound
#define           vi    vector<int>
#define           qi    queue<int>
#define           di    deque<int> 
#define           si    stack<int>
#define          pii    pair<int, int>
#define          mii    map<int, int>
#define           ll    long long
#define          ull    unsigned long long
#define       all(x)    x.begin(), x.end()
#define      rall(x)    x.rbegin(), x.rend()
#define   uniquev(v)    sort(all(v)), (v).resize(unique(all(v)) - (v).begin())
#define     mem(f,x)    memset(f , x , sizeof(f))
#define        sz(x)    (int)(x).size()
#define  __lcm(a, b)    (1ll * ((a) / __gcd((a), (b))) * (b))
#define          mxx    *max_element
#define          mnn    *min_element
#define    cntbit(x)    __builtin_popcountll(x)
#define       len(x)    (int)(x.length())
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#define       floop(x,y,z) for((x) = y; (x) < (z); ++x) 
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9;
//=====================//
void solve() 
{
    string s1,s2; 
    cin>>s1>>s2; 
    int m = s1.size(); 
    int n = s2.size(); 
    for (int i = max(m,n); i > m; --i) s1 = string(1,'0') + s1; 
    for (int i = max(m,n); i > n; --i) s2 = string(1,'0') + s2; 
    string s = ""; 
    for (int i = s1.size() - 1; i >=0; --i) 
    {
        int temp = ((s1[i] - '0') + (s2[i] - '0')) % 10;  
        s = to_string(temp) + s;  
    }
    cout<<s; 
}
int main() 
{
    fast; 
    solve(); 
}