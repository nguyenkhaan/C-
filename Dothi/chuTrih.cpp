//Chu trinh bang thuat toan dfs 
/* 
- Tạo thêm 1 tham số par (cạnh cha) 
- Nếu ta thăm lại 1 đỉnh đã được thăm và đỉnh đó khác với đỉnh cha hiện tại thì 
có chu trình: 
VD: duyệt đỉnh 2 -> thăm đỉnh 4 -> 4 có đường về lại 2 đỉnh đã đc thăm là 2 và 1
Nếu thăm đinh 2, thì 2 sẽ đóng vai trò là con, hơn nữa, 2 cũng là par của 4 
-> Không thỏa mãn 
Nên ta phải thăm đỉnh 1 -> đỉnh 1 đóng vai trò là con, 2 đóng vai trò là par
-> thỏa mãn 
 */
#include <bits/stdc++.h>
//Thuc hien truy vet: tao mot mang parent[i] = p, de the hien p chinh la dinh cha cua i
using namespace std; 
int end1,start; 
vector<int> a[1000]; 
bool visited[1000]; 
int parent[10000];
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
    memset(visited,true,sizeof(visited)); 

}
bool dfs(int u, int par) //par chinh la canh cha cua thang u 
{
    visited[u] = false; 
    for (auto x : a[u]) 
    {
        if (visited[x]) {
            parent[x] = u; 
            if (dfs(x,u)) return true; 
        }
        else if (par != x) { //x dong vai tro la con, u dong vai tro la par 
            start = x; end1 = u;  //phai ve ra, lay vi dau tai 1 va 3 la se thay 
            return true;
        }  
    }
    return false; 
}
int main() 
{
    inp(); 
    for (int i = 1; i<=n; ++i) //Dung cai nay cho cac do thi khong lien thong 
    {
        if (visited[i]) 
        {
            if (dfs(i,0)) {
                cout<<"yes"; 
                while (start != end1) 
                {
                    cout<<end1<<" "; 
                    end1 = parent[end1]; //thuc hien truy vet 
                }
            } 
            else cout<<"no"; 
        }
    }
}