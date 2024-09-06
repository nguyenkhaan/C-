#include <bits/stdc++.h>
using namespace std; 
//Thuc hien dem so thanh phan lien thong 
//MA GIAI CUA THUAT TOAN
/*
1. Duyệt các đỉnh từ 1 - n. Nếu như 
gặp 1 đỉnh chưa thăm, ta gọi thuật toán dfs/bfs để thăm 
hết tất cả các đỉnh liên thông với đỉnh đó 
2. Tạo biến đếm cnt để đếm số thành phần liên thông 
*/
vector<int> a[1000]; 
bool visited[1000]; 
int n,m; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i<=m; ++i) 
    {
        int x,y; cin>>x>>y; 
        a[x].push_back(y); 
        a[y].push_back(x); 
    }

}
void dfs(int u) 
{
    if (!visited[u]) visited[u] = true; //danh dau da duoc tham roi 
    for (auto x : a[u]) if (!visited[x]) dfs(x); 
}
int connect() 
{
    int cnt = 0; 
    for (int i = 1; i<=n; ++i) 
    {
        if (!visited[i]) {
            cnt++; 
            dfs(i); 
        }
    }
    return cnt; 
}
int main() 
{
    memset(visited,false,sizeof(visited)); 
    inp(); 
    cout<<connect(); 
}