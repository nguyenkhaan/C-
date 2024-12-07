/*
Ứng dụng của DSU: kiểm tra hai đỉnh u,v có thuộc cùng một thành phần liên thông không 

*/
#include <bits/stdc++.h> 
using namespace std; 
const int maxn = 100; 
vector<int> adj[maxn]; 
int m,n; 
int leader[maxn]; 
int size[maxn]; 
bool visited[maxn]; 
void inp() 
{
    cin >> m >> n; 
    for (int i = 0; i < m; ++i) 
    {
        int x,y; 
        cin >> x >> y; 
        adj[x].push_back(y); 
        adj[y].push_back(x); 
    }
    memset(visited,0,sizeof(visited)); 
}
void make_set() 
{
    for (int i = 1; i <= n; ++i) {
        leader[i] = i; 
        size[i] = 1; 
    }
}
int _find(int a) 
{
    if (a == leader[a]) return a; 
    else return a = _find(leader[a]); 
}
void _union(int a, int b) 
{
    a = _find(a); 
    b = _find(b); 
    if (a == b) return; 
    if (size[a] >= size[b]) {
        leader[b] = a; 
        size[a] += size[b]; 
    } 
    else {
        leader[a] = b; 
        size[b] += size[a]; 
    }
}

int main() 
{
    inp(); 
    make_set(); 
    for (int i = 1; i <= n; ++i) 
    {
        for (auto x : adj[i]) _union(i,x); 
    }
    int k,h; 
    cin >> k >> h; 
    if (_find(k) == _find(h)) cout<<"Cng thanh phan lien thong"; 
    else cout<<"Khong cung thanh phan lien thong"; 
}