/* Tư tưởng của thuật toàn này 
là tìm kiếm xung quanh trước khi đi sâu xuống 
Sử dụng queue, không dùng đề quy */
#include <bits/stdc++.h>
using namespace std; 
vector<long>a[10001]; 
int n,m; 
bool visited[10001]; 
void inp() 
{
    cin>>n>>m; 
    for (long i = 0; i<m; ++i) 
    {
        int x,y; cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
}
void bfs(int u) 
{
    queue<long> q; 
    q.push(u); 
    cout<<u<<"   "; 
    visited[u] = true; //danh dau cai dinh dau tien thoi 
    while (!q.empty()) {
        int v = q.front();  
        cout<<v<<"  "; 
        q.pop(); 
        for (auto x:a[v]) if (!visited[x]) {
            q.push(x); 
            visited[x] = true; 
        }
    }
}
int main() 
{
    inp(); 
    memset(visited,false,sizeof(visited)); 
    bfs(1); 
}