#include <bits/stdc++.h>
using namespace std; 
int n,node[1000],a[1000]; 
void update(int x, int val) 
{
    while (x<=n) 
    {
        node[x] = max(node[x],val); 
        x += x & (-x); 
    }
}
int get(int x) 
{
    int ans = 0;
    while (x) 
    {
        ans = max(ans,node[x]); //Chi doc tai phan tu x thoi 
        x -= x & (-x); 
    }
    return ans; 
}
int main() 
{
    cin>>n; 
    int ans = 0;
    for (int i=0; i<n; i++) 
    {
        cin>>a[i]; 
        ans = max(get(a[i]),ans); 
        update(a[i],ans+1); 
    }
    cout<<ans+1; 
}