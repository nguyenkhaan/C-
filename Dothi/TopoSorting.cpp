/* '
Cách 1: Sử dụng thuật toán dfs 
- Đỉnh được thăm xong đầu tiên sẽ được lưu vào mảng topo. Cứ như vậy sẽ thu được thứ tự 
sắp xếp topo 
*/
#include <bits/stdc++.h>
using namespace std; 
int n,m; 
vector<int> a[1000]; 
vector<int> topo; 
bool visited[1000]; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i <= m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }
    memset(visited,false,sizeof(visited)); 
}
void dfs(int u) 
{
    visited[u] = true; //danh dau da tham ri 
    for (auto x : a[u]) 
        if (!visited[x]) dfs(x);  
    topo.push_back(u); 
}
int main() 
{
    inp(); 
    for (int i = 1; i <= n; ++i) if (!visited[i]) dfs(i);  
    for (auto t : topo) cout<<t<<" "; 
}