
/**
 * Chu trình Euler: là chu trình qua mỗi cạnh 
 * đồ thị 1 lần  
 * Đường đi Euler: là đường đi qua mỗi cạnh đồ thị 1 lần 
 * Đồ thị có chu trình Euler gọi là đồ thị Euler 
 * 2. Điều kiện 
 * a) Đồ thị vô hướng
 * - Các đỉnh có bậc khác 0 liên thông nhau 
 * ----> Chu trình: tất cả các đỉnh có bậc chẵn
 * ----> Đường đi:  Có 0 hoặc 2 đỉnh bậc lẻ. 
 * Nếu có 2 đỉnh bậc lẻ thì đường đi xuất phát từ đỉnh bậc lẻ 1  
 * và kết thúc ở đỉnh bậc lẻ thứ 2 
 * b) Đồ thị có hướng 
 * - Các đỉnh có bậc khác 0 liên thông nhau 
 * ----> Chu trình: Tất cả các đỉnh bán bậc ra = bán bậc vào 
 * ----> Đường đi: Tồn tại 2 đỉnh u,v thỏa mản 
 * deg+(u) - deg-(u) = 1 và deg-(v) - deg+(v) = 1. Các đỉnh 
 * còn lại phải có deg+ = deg-. Đường đi bắt đầu từ nơi có bán 
 * ra trội hơn.  
 */
#include <bits/stdc++.h>
using namespace std; 
int m,n; 
const int maxN = 1002; 
set<int> adj[maxN]; 
void inp() 
{
    cin >> n >> m; 
    for (int i = 0; i < m; ++i) 
    {
        int x,y; 
        cin >> x >> y; 
        adj[x].push_back(y); 
    }
}
void euler(int u) 
{
    stack<int> st; 
    vector<int> ec; 
    st.push(u); 
    while (!st.empty()) 
    {
        int x = st.top(); 
        if (adj[x].size() != 0) {
            int y = *adj[x].begin(); 
            adj[x].erase(y); 
            st.push(y); 
        } 
        else 
        {
            ec.push_back(x); 
            st.pop(); 
        }
    }
    for (auto x : ec) cout<<x<<' '; 
}
int main() 
{
    inp(); 
    euler(1); 
}