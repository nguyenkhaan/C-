#include <bits/stdc++.h>
using namespace std; 
#define int unsigned long long 
int m,n; 
const int maxN = 200002; 
vector<pair<int,int>> adj_edge[maxN];  
void inp()
{
    cin >> n >> m; 
    for (int i = 0; i < m; ++i) 
    {
        int x,w,y; 
        cin >> x >> y>> w; 
        adj_edge[x].push_back({y,w}); 
    }
}
const int INF = LLONG_MAX*2; 
void djikstra(int s) 
{
    vector<int> d(n + 2, INF); 
    d[s] = 0; 
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> q; 
    q.push({0,s}); 
    while (!q.empty()) 
    {
        pair<int,int> to = q.top(); 
        q.pop(); 
        int current_u = to.second;  
        int current_len = to.first; 
        if (current_len > d[current_u]) continue; 
        for (auto it : adj_edge[current_u]) 
        {
            int v = it.first; 
            int v_len = it.second; 
            if (d[v] > d[current_u] + v_len) //cập nhật khoảng cách cho các đỉnh kề của u 
            {
                d[v] = d[current_u] + v_len; 
                q.push({d[v] , v}); 
            }
        }
    }
    for (int i = 1; i <= n; ++i) cout<<d[i]<<" "; 
    
}
main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    inp(); 
    djikstra(1); 
}