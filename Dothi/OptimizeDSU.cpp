/**
 * Ta thực hiện gán luôn leader chính gốc trong hàm _find 
 * leader[a] = _find(leader(a)) -> lần sau đỡ mất công duyệt lại 
 * Tạo một mảng size để tối ưu hơn cho hàm _union 
 * - Cái nào có size lớn hơn thì lấy nó làm leader 
 * Ứng dụng của DSU: xây dựng đồ thị liên quan tới chu trình 
 * - Giả sử ta cần xây dựng 1 đồ thị. Khi thêm cạnh (u,v) ta có thể kiểm tra 
 * - leader[u] = leader[v]: tạo thành chu trình khi thêm (u,v)  
 * - leader[u] != leader[v] không thành chu trình khi thêm (u,v) 
 * - Thực hiện union(u,v) vào DSU để xử lí cho các TH tiếp theo 
 */
#include <bits/stdc++.h>
using namespace std; 
int size[1000]; 
int leader[1000]; 
int n; 
void make_set() 
{
    for (int i = 1; i <= n; ++i) 
    {
        leader[i] = i; 
        size[leader[i]]++; 
    }
}
int _find(int a) 
{
    if (a == leader[a]) return a; 
    else return leader[a] = _find(leader[a]); 
}
void _union(int a, int b) 
{
    a = _find(a); 
    b = _find(b); 
    if (a == b) return; 
    else 
    {
        if (a >= b) {
            leader[b] = a; 
            size[b] += size[a]; 
        }
        else {
            leader[a] = b; 
            size[a] += size[b]; 
        } 

    }
}
int main() 
{
    cin>>n; 
    make_set(); 
}