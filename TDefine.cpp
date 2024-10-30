#include <bits/stdc++.h>
using namespace std;
//=====================//
#define           f     first
#define           s     second
#define           pu    push 
#define           pb    push_back
#define           ep    emplace
#define           eb    emplace_back
#define           lb    lower_bound
#define           ub    upper_bound
#define           vi    vector<int>
#define           qi    queue<int>
#define          pqi    priority_queue<int> 
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
#define         endl    cout<<endl; 
//#define         int     long long 
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9;
//=====================//