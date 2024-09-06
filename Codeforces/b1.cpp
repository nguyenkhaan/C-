#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
typedef long long int lli; 
typedef long int li; 
void solve() 
{
    int n; cin>>n; 
    int ans; 
    vector<pair<lli,lli>> a(n); 
    vector<int> t(n+1); //Mang danh dau 
    set<lli> my_set;  
    for (li i=0; i<n; i++) cin>>a[i].first; 
    for (li i=0; i<n; i++) 
    {
        cin>>a[i].second; 
        if (a[i].first == a[i].second) t[i] = 1;
        my_set.insert(a[i].second); 
    }
    t[n+1] = 1; 
    li m; cin>>m; 
    vector<int> d(m); 
    for (li i=0; i<m; i++) cin>>d[i]; 
    for (li i=0; i<m; i++) 
    {
        if (my_set.find(d[i])!=my_set.end())
        { 
            ans = 1; 
            for (li j=0; j<n; j++) if  ((a[j].second == d[i]) && (t[j] ==0))
            {
                t[j] = 1; 
                ans --; 
                break;
            }
            if (ans==1) t[n] = 1; 
        }
        else t[n] = 0; 
    }
    int s = 0; 
    for (int x:t) s+=x;
    if ((s-1)==n) cout<<"YES"; 
    else cout<<"NO"; 
}
int main() 
{
    li t; cin>>t; 
    for (li h=0; h<t; h++) solve(); 
    return 0; 
}