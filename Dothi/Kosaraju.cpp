/** 
 * Tư tưởng của giải thuật: 
 * - Tìm kiếm thành phần liên thông mạnh trên đồ thị 
 * - Các bước thực hiện: 
 * b1: Duyệt dfs đồ thị ban đầu, tìm ra thứ tự sắp xếp topo trên đó và lưu vào một stack 
 * b2: Tạo ra một đồ thị chuyển vị (TG - Transpo Graph) 
 * b3: Lấy lần lượt các đỉnh đầu stack và duyệt dfs trên TG -> đếm số thành phần liên thông 
 * Lí do phải tạo TG: một đồ thị liên thông mạnh khi có đường đi từ A - B cũng như 
 * từ đỉnh B - A -> tạo ra 1 TG 
 */
#include <bits/stdc++.h>
using namespace std; 
int color[1000]; 
vector<int> a[1000]; 
vector<int> ta[1000]; 
int n,m,d(0); 
stack<int> topo; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i <= m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        ta[y].push_back(x); 
    }
    memset(color,0,sizeof(color)); 
}
void dfs(int u, vector<int> (&a)[1000]) 
{
    color[u] = 1; 
    for (auto v : a[u]) 
    {
        if (color[v] == 0) dfs(v,a); 
    }
    topo.push(u); 
}
void korasaju(int u) 
{
    ++d; 
    dfs(u,ta); 
}
int main() 
{
    inp(); 
    for (int i = 1; i <= n; ++i) if (color[i] == 0) dfs(i,a); 
    memset(color,0,sizeof(color)); 
    while (!topo.empty()) 
    {
        int u = topo.top(); 
        if (color[u] == 0) korasaju(u); 
        topo.pop(); 
    }
    cout<<d; 
}
