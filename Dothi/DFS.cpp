//Tìm kiếm theo chiều sâu 
/* 
- Ưu tiên duyệt xuống nhất có 
thể trước khi quay lại
- Mở rộng đồ thị 
 Đpt phụ thuộc vào cách biểu diễn 
- 
*/
#include <bits/stdc++.h>
using namespace std; 
int n,m; //So canh va so dinh 
vector<int> a[10001]; //a[i] se luu danh sach ke cua dinh i 
bool visited[1001]; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i<=m; ++i) 
    {
        int x,y; cin>>x>>y;   //nhap vao kieu danh sach canh 
        a[x].push_back(y); 
      //  a[y].push_back(x); 
    }
}
void dfs(int u) 
{
    visited[u] = false; 
    cout<<u<<"  "; 
    for (int v:a[u]) 
    {
        if (visited[v]) dfs(v); 
    }
}
int main() 
{
    memset(visited,true,sizeof(visited)); 
    inp(); 
    dfs(1); 
}