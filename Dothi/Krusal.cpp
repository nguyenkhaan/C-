/*
1. Cây khung 
- Đặc điểm của cây khung 
    +) Liên thông: Mọi đỉnh trong cây khung đều liên thông với nhau 
    +) Không có chu trình 
    +) Đồ thị có n đỉnh thì cây khung có (n-1) cạnh 
2. Mã giải 
B1: Khởi tạo MST = rỗng, E : tập cạnh 
d(MST) = 0 
B2: sort các cạnh E theo độ dài tưng dần 
B3: while (|MST| < n - 1 && E khác rỗng) 
{
    l = min(E) 
    if (MST + e không thành chu trình trong cây khung) -> dùng DSU để kiểm tra chu trình trong cây khung 
    {
        MST = MST + e 
        d(MST) += d(e) 
    }
}
*/
#include <bits/stdc++.h>
using namespace std; 
int n,m; 
struct edge 
{
    int u,v; 
    int w; 
    edge(int u, int v, int w) {
        this->u = u; 
        this->v = v; 
        this->w = w; 
    }
}; 
const int maxN = 1001; 
int leader[maxN],size[maxN]; 
vector<edge> canh; 
void make_set() 
{
    for (int i = 1; i <= n; ++i) {
        leader[i] = i; 
        size[i] = 1; 
    }
}
int _find(int u) 
{
    if (u == leader[u]) return u; 
    else return u = _find(leader[u]); 
}
bool _union(int a, int b) 
{
    a = _find(a); 
    b = _find(b); 
    if (a == b) return false; //khong the gop a,b 
    if (size[a] >= size[b]) {
        leader[b] = a; 
        size[a] += size[b]; 
    }
    else 
    {
        leader[a] = b; 
        size[b] += size[a]; 
    }
    return true; 
}
void inp() 
{
    cin>>n>>m; 
    for (int i = 0; i < m; ++i) 
    {
        int x,y,z; //x: dinh dau, y: dinh cuoi , z: trong so 
        cin>>x>>y>>z; 
        edge e(x,y,z); 
        canh.push_back(e); 
    }
}
bool compare(edge &a, edge &b) 
{
    return a.w <= b.w; 
}
void krusal() 
{
    //B1: Tao cay khung cuc tieu rong 
    vector<edge> mst; 
    int d = 0; 
    //B2: Sap xep danh sach canh 
    sort(canh.begin() , canh.end() , compare); 
    //B3: lap 
    int idx = 0; 
    while (mst.size() < n - 1 && idx < m)
    {
        edge l = canh[idx]; 
        if (_union(l.u , l.v)) {
            mst.push_back(l); 
            d += l.w; 
        }
        ++idx; 
    }
    //tra ve ket qua 
    cout<<d; 
}
int main() 
{

}
