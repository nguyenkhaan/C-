/**
 * Disjoint set Union (DSU) 
 * Tác dụng: Xử lí các tập hợ rời rạc 
 * - Mỗi tập hợp sẽ có 1 phần tử đại diện gọi là leader 
 * leader[i]: phần tử đại diện của phần tử i 
 * make_set: Khởi tạo các tập hợp 
 * _find(a): tìm leader của tập hợp 
 * _union(a,b): nối 2 leader lại với nhau 
 */
#include <bits/stdc++.h>
using namespace std; 
int n; 
int leader[1000], int size[1000]; 
void make_set() 
{
    
    for (int i = 1; i <= n; ++i) {
        size[i] = 1; 
        leader[i] = i; 
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
    else 
    {
        leader[a] = b; 
        size[b] += size[a]; 
    } 
}
int main() 
{
    cin>>n;  
    make_set(); 
}
