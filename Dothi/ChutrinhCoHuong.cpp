/** Ta sẽ sử dụng 1 bảng màu để thể hiện đối tượng 
 * 0: (màu trắng): đỉnh chưa được thăm xong 
 * 1: (màu xám): đỉnh đang được thăm 
 * 2: (màu đen): đỉnh đã được thăm xong 
 * -> Cạnh ngược (u,v) tồn tại khi đỉnh có màu xàm (chưa được thăm xong) 
 */
#include <bits/stdc++.h>
using namespace std; 
int m,n; 
vector<int> a[1000]; 
int color[1000]; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i <= m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
    }
    memset(color,0,sizeof(color)); 
}
bool dfs(int u) 
{
    color[u] = 1; 
    for (auto v : a[u]) 
    {
        if (color[v] == 0) 
        {
            if (dfs(v)) return true; 
        }
        else if (color[v] == 1) return true;        
    }
    color[u] = 2; 
    return false; 
}
int main() 
{
    inp(); 
    for (int i = 1; i <= n; ++i) if (color[i] == 0) cout<<dfs(i)<<endl; 
}