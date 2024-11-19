#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
int m,n; 
const int maxN = 1010; 
vector<pair<int,int>> a[maxN]; 
void inp() 
{
    cin >> n >> m; 
    for (int i = 0; i < m; ++i) 
    {
        int x,y,w; 
        cin >> x >> y >> w; 
        a[x].push_back({y,w}); 
    }
}
const int INF = 1e4; 
void djikstra(int s) 
{
    vector<int> d(n + 1, INF); 
    d[s] = 0; 
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> q; 
    q.push({0,s}); 
    while (!q.empty()) 
    {
        pair<int,int> top = q.top(); 
        q.pop(); 
        int current_u = top.second; 
        int current_len = top.first; 
        if (current_len > d[current_u]) continue; 
        for (auto it : a[current_u]) {
            int v = it.first; 
            int len  =it.second; 
            if (d[v] > d[current_u] + len) {
                d[v] = d[current_u] + len; 
                q.push({d[v],v}); 
            }
        }
    }
}
int main() 
{
    inp(); 
    djikstra(1); 
}