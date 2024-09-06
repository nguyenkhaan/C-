/*
THUẬT TOÁN KAHN (HĐ DỰA TRÊN BFS) -> Xóa dần đỉnh 
B1. Đẩy các đỉnh có bán bậc vào là 0 vào hàng đợi 
B2> Duyệt cho tới khi hàng đợi trống 
    Lấy đỉnh đầu hàng đợi ra khỏi hàng đợi 
    Duyệt các đỉnh kề với đỉnh vừa lấy ra 
        Giảm các bán bậc vào của các đỉnh kề vơi nó in[v]--;  
        Nếu như bán bậc vào = 0 thì đẩy vào hàng đợi 

*/
#include <bits/stdc++.h>
using namespace std; 
int n,m; 
vector<int> a[1000]; 
bool visited[1000]; 
vector<int> topo; 
int in[1000]; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i<=m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        in[y]++; 
    }
}
void kahn() 
{
    queue<int> q; 
    for (int i = 1; i<=n; ++i) if (in[i]==0) q.push(i); 
    while (!q.empty()) 
    {
        int v = q.front(); 
        q.pop(); 
        topo.push_back(v); 
        for (auto x : a[v]) {
            in[x]--; 
            if (in[x] == 0) q.push(x);  
        }
    }
} 
int main() 
{
    inp(); 
    kahn(); 
}