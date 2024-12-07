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
    d[s] = 0;   //khoang cach 
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> q; 
    q.push({0,s});  //sap xep theo trong so 
    while (!q.empty()) 
    {
        pair<int,int> top = q.top(); 
        q.pop(); 
        int current_u = top.second;  //lay ra dinh co trong so nho nhat 
        int current_len = top.first; 
        if (current_len > d[current_u]) continue; //khoang cach hien tai lon hon khoang roi thi bo qua khong can cap nhat d 
        for (auto it : a[current_u]) { //duyet danh sach ke cua dinh do 
            int v = it.first;  //lay ra cai dinh ke 
            int len  =it.second;  //lay ra cai dinh ke 
            if (d[v] > d[current_u] + len) { //len la trong so tu current_u cho toi v 
                d[v] = d[current_u] + len; 
                q.push({d[v],v});  //them cai trog so moi va dinh do vao queue 
            }
        }
    }
}
int main() 
{
    inp(); 
    djikstra(1); 
}