#include <bits/stdc++.h>
using namespace std; 
#define rep(x,y,z) for (int x = (y); x<(z); ++x)

void solve() 
{
    rep(i,0,n) 
    for (int i = 0; i<n; ++i) 
    /*
    Cấu trúc dữ liệu Container 
    1. vector: mảng nhưng có thể chèn
    2. pair: đặc trưng cho 1 cặp giá trị (1,5) -> 1: first, 5: second 
    3. set: nó lưu trữ các giá trị không trùng lặp và sắp xếp tăng dần (nhanh) 
    vd: 1 1 5 3 -> set: 1 3 5 
    4. map: key - value: 
    vd: mp[1] = 5 -> key: 1, value : 5 
    iterator: con trỏ đặc biệt xài riêng cho Container, con trỏ bình thường không có duyệt được 
    vd: phải biết nó hỗ trợ hàm gì 
    string: có hàm để hỗ trợ việc xóa kí tự -> chat gpt -> erase 
    */
    2 4 5 6 7 
    1 2 3 4 6 
    2 2 2 2 1
    x x x x x 
    int n; 
    cin>>n; 
    vector<int> a(n); 
    vector<int> b(n); 
    int mi = 10000; 
    for(int i = 0; i<n; ++i) {
        cin>>a[i]; 
        mi = min(mi,a[i]); //Tim min cua day so 
    }
    for (int i=0; i<n; ++i) cin>>b[i];  
    map<int,int> mp;  //map dung de danh dau gia tri ma no se dua ve 
    int m = 0;  
    for (int i = 0; i<n; ++i)  O(n) 
    {
        // a[i] - step*b[i] <= min 
        // => step >= (a[i] - min) / b[i] 
        // de step lon nhat thi 
        // vd: a = 3, b = 2, min = 1 
        // (3 - 1) / 2 = 1 
        // int step = 0; 
        // neu nhu no khong chia het 
        // a = 6, min = 1, b = 2 
        // 6 - 2*3 = 6 
        // (6 - 1) / 2 = (2 +)
        if (((a[i] - mi) % b[i]) == 0) step = (a[i] - mi) / b[i]; 
        else step = (a[i] - mi) / b[i] + 1; //step dua ve so nho hon, lon nhat gan voi mi 
        m += step; 
        a[i] -= (b[i]*step); 
    }
    //Tao ra mot cai map(key, value) 
    for (int i = 0; i<n; ++i) //tien hanh cap nhat cac gia tri co the dua ve 
    {
        minh se lay (a - b) cho toi khi nao ma a < 0
        (a - b) -> nhung so ma a co the dua ve duoc 
        vd: a1 = 5
            b1 = 2 -> (3,2,1) -> key = 3: 1 lan roi 
            a2 = 6
            b2 = 3 -> (3,0) -> 

        mp[a[i]]++; 
        int z = a[i]; 
        while (z - b[i] >=0) {
            z -= b[i]; 
            mp[z]++;  //cap nhat do map 
        }
    }
    int BC = 0; 
    int ans = 0; 
    bool ok = false; 
    map -> key value -> 1 cap so -> pair<int,int> x.fist va x.second 
    for (pair<int,int> x:mp) if (x.second == n) {
        BC = max(BC,x.first); //tim gia tri co the dua ve
        //BC xuat hien trong tat ca cac gia tri co the dua ve va la so lon nhat 
        ok = 1; 
    } 
    if (!ok) //thoa man, co BC roi 
    {
        cout<<"-1"<<endl; 
        return; 
    }
    for (int i = 0; i<n; ++i) ans += (a[i] - BC) / b[i]; 
    dua thang a[i] ve BC 
    a[i] - step*b[i] = BC 
    -> step = (a[i] - BC) / b[i] 
    //dua tat ca cac so a[i] ve gia tri BC 
    ans += m; 
    cout<<ans<<endl;
}
int main() 
{
    solve(); 
}