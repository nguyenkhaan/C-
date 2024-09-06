//https://leetcode.com/problems/sliding-window-maximum/description/
#include <bits/stdc++.h>
using namespace std; 
deque<pair<int,int>> q; 
vector<int> a; 
int n,w,k; 
void emptyQueue(int x) 
{
    if (q.empty()) q.push_front(make_pair(a[x],x)); 
}
void pushItem(int x) 
{   
    while (!q.empty() && q.back().first < a[x]) q.pop_back(); 
    q.push_back(make_pair(a[x],x)); 
}
void solve() 
{
    cin>>n>>k; 
    a.resize(n+2); 
    for (int i = 1; i<=n; ++i) cin>>a[i]; 
    for (int i = 1; i<=k; i++) pushItem(i); 
    w = 2; 
    cout<<q.front().first<<"  "; 
    for (int i = k+1; i<=n; i++) 
    {
        pushItem(i);  
        cout<<q.front().first<<"  "; 
        if (!(q.front().second >= w && q.front().second()<=(w+k-1))) q.pop_front(); 
        ++w; 
    }
}
signed main() 
{
    solve(); 
}