#include <bits/stdc++.h>
using namespace std; 
int m,n,d(0); 
vector<int> a[1000]; 
vector<int> ta[1000];  
int color[1000]; 
bool ok = 0; 
stack<int> st; 
void inp() 
{
    cin>>n>>m; 
    for(int i = 1; i <= m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        a[x].push_back(y); 
        ta->push_back(x); 
    }
    memset(color,0,sizeof(color)); 
}
void dfs(int u, vector<int> (&a)[1000]) 
{
    color[u] = 2; //danh dau da tham roi 
    for (auto v : a[u]) 
    {
        if (color[v] == 0) dfs(v,a);  
    }
    if (!ok) st.push(u);  
}
void kosaraju(int u) 
{
    ++d; 
    dfs(u,ta); 
}
int main() 
{
    inp(); 
    for (int i = 1; i <= n; ++i) 
        if (color[i] == 0) dfs(i,a); 
    ok = 1; 
    memset(color,0,sizeof(color)); 
    while (!st.empty()) 
    {
        int v = st.top(); 
        st.pop(); 
        if (color[v] == 0) kosaraju(v); 
    }
}

