#include <bits/stdc++.h>
using namespace std; 
int n; 
int _right[1000],_left[1000],a[1000]; 
struct node 
{
    int mi = INT_MAX; 
}t[4000];
void makeLeftRight() 
{
    stack<int> st; 
    st.push(n+1); 
    for (int i = n; i >= 1; i--) 
    {
        while (a[i] > a[st.top()]) st.pop(); 
        _right[i] = st.top(); 
        st.push(i); 
    }
    while (!st.empty()) st.pop(); 
    st.push(0); 
    for (int i = 1; i <= n; i++) 
    {
        while (a[i] > a[st.top()]) st.pop(); 
        _left[i] = st.top(); 
        st.push(i); 
    }
}
void build(int id, int l, int r) 
{
    if (l == r) 
    {
        t[id].mi = a[l]; 
        return; 
    }
    int m = (l+r)/2; 
    build(id*2,l,m);
    build(id*2+1,m+1,r); 
    t[id].mi = min(t[id*2].mi , t[id*2+1].mi); 
}
int get(int id, int l, int r, int u, int v) 
{
    if (r<u || l>v) return INT_MAX; 
    if (l>=u && r<=v) return t[id].mi;
    int m = (l+r)/2; 
    int t1 = get(id*2,l,m,u,v); 
    int t2 = get(id*2+1,m+1,r,u,v); 
    return min(t1,t2); 
}
int main() 
{
    cin>>n; 
    for (int i = 1; i<=n; i++) cin>>a[i]; 
    a[0] = INT_MAX; 
    a[n+1] = INT_MAX; 
    makeLeftRight(); 
    build(1,1,n); 
    int ans = INT_MAX; 
    for (int i = 1; i<=n; i++) 
    {
        if (_left[i]!=0 && _right[i]!=n+1) 
        {
            int mi = get(1,1,n,_left[i],_right[i]); 
            ans = min(ans , mi*(_right[i] - _left[i] +1)); 
        }
    }
    cout<<ans;  
}