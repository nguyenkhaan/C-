#include <bits/stdc++.h>
using namespace std; 
//cout[i] -> so duong di ngan nhat tu dinh 1 toi dinh i 
//neu nhu khoang cach bang nhau -> cong gia tri cua 2 cai lai 
//neu nhu co khoang cach duoc update -> count[v] = count[u] 
#define int unsigned long long 
const int maxN = 5002; 
vector<pair<int,int>> adj_edge[maxN]; 
int m,n; 
void inp() 
{
    cin >> n >> m; 
    for (int i = 0; i < m; ++i) 
    {
        int k,x,y,w; 
        cin >> k >> x >> y >> w; 
        if (k == 1) adj_edge[x].push_back({y,w}); 
        else {
            adj_edge[x].push_back({y,w}); 
            adj_edge[y].push_back({x,w}); 
        }
    }
}
const int INF = LLONG_MAX*2; 
void djikstra(int s) 
{
    vector<int> d(n + 1, INF); 
    vector<int> count(n + 1, 0); 
    d[s] = 0;  
    count[s] = 1; 
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
            int w = it.second; 
            if (d[v] > w + d[current_u]) {
                d[v] = w + d[current_u]; 
                q.push({d[v] , v});
                count[v] = count[current_u]; 
            }  
            else if (d[v] == w + d[current_u]) count[v] += count[current_u]; 
        }
    }
    cout<<d[n]<<" "<<count[n]; 
}
main() 
{
    inp(); 
    djikstra(1); 
}