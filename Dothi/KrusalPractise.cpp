#include <bits/stdc++.h>
using namespace std; 
const int maxN = 1001; 
int leader[maxN] , size[maxN]; 
int m,n; 
struct edge 
{
    int u,v; 
    int w; 
    edge(int u, int v, int w) 
    {
        this->u = u; 
        this->v = v; 
        this->w = w; 
    }
}; 
vector<edge> list_edge; 
void make_set() 
{
    for (int i = 1; i <= n; ++i) 
    {
        leader[i] = i; 
        size[i] = 1; 
    }
}
int _find(int u) 
{
    if (u == leader[u]) return u; 
    else return u = _find(leader[u]); 
}
bool _union(int a, int b) 
{
    a = _find(a); 
    b = _find(b); 
    if (a == b) return false; 
    if (size[a] >= size[b]) 
    {
        leader[b] = a;
        size[a] += size[b]; 
    }
    else 
    {
        leader[a] = b; 
        size[b] += a; 
    }
}
void inp() 
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i) 
    {
        int u,v,w; 
        cin>>u>>v>>w; 
        edge temp(u,v,w); 
        list_edge.push_back(temp); 
    } 
}
bool compare(edge a, edge b) 
{
    return a.w >= b.w; 
}
void krusal() 
{
    vector<edge> mst; 
    int d = 0; 
    sort(list_edge.begin() , list_edge.end() , compare); 
    int j = 0; 
    while (mst.size() < n - 1 && j < m)  
    {
        edge l = list_edge[j]; 
        if (_union(l.u , l.v)) {
            ++d; 
            mst.push_back(l); 
        }
        ++j; 
    }
    cout<<d; 
}
int main() 
{
    
}