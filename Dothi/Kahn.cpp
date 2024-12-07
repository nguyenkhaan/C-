//Cach 2: Xoa dan dinh 
/*
- Ban bac vao la 0 -> day vao hang doi 
- Dung 1 mang in de luu ban bac vao cua dinh i 
 */
#include <bits/stdc++.h>
using namespace std; 
int n,m; 
vector<int> a[1000]; 
int in1[1000]; 
vector<int> topo; 
void inp() 
{
    cin>>n>>m; 
    for (int i = 1; i <= m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        in1[y]++; 
    }
}
void kahn() 
{
    queue<int> q; 
    for (int i = 1; i <= n; ++i) 
        if (in1[i] == 0) q.push(i); //day dinh i vao dau hang doi 
    while (!q.empty()) 
    {
        int v = q.front(); q.pop(); 
        topo.push_back(v); 
        for (auto x : a[v]) 
        {
            if (in1[x] > 0) in1[x]--; 
            if (in1[x] == 0) q.push(x); 
        }
    }
    for (auto z : topo) cout<<z<<' '; 
}
int main() 
{
    inp(); 
    kahn(); 
}