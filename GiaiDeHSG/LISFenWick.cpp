#include <bits/stdc++.h>
using namespace std; 
int n,a[1000],node[1000]; 
void update(int num, int val) 
{
    while (num<=n) 
    {
        node[num] = max(node[num],val); 
        num += num & (-num); 
    }
}
int get(int num) 
{
    int ans = 0;
    while (num) 
    {
        ans = max(ans,node[num]); 
        num-= num & (-num); 
    }
    return ans; 
}
int main() 
{
    cin>>n; 
    for (int i=0; i<n; i++) cin>>a[i]; 
    int ans = 0;
    for (int i=0; i<n; i++) 
    {
        int x = get(a[i])+1; 
        ans = max(ans,x); 
        update(a[i],x); 
    }
    cout<<ans; 
}