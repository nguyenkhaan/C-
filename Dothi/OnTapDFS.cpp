#include <bits/stdc++.h>
using namespace std; 
int m,n; 
const int maxn = 1000; 
set<int> adj[maxn]; 
void inp() 
{
    cin >> m >> n; 
    for (int i = 0; i < m; ++i) 
    {
        int x,y; 
        cin >> x >> y; 
        adj[x].insert(y); 
        adj[y].insert(x); 
    }
}
void euler(int u) 
{
    stack<int> st; 
    st.push(u); 
    vector<int> ec; 
    while (!st.empty()) 
    {
        int v = st.top(); 
        if (adj[v].size() > 0) 
        {
            int y = *adj[v].begin(); 
            st.push(y); 
            adj[v].erase(y); 
        }
        else {
            ec.push_back(v); 
            st.pop(); 
        }
    }
    for (auto x : ec) cout<<x<<" "; 
}
int main() 
{
    inp(); 
    euler(1); 
}