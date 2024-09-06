#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
typedef long long int lli; 
typedef long int li; 
void solve() 
{
    li n; cin>>n; 
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
    t[n] = 1; 
    li m; cin>>m; 
    vector<int> d(m); 
    for (li i=0; i<m; i++) 
    {
        cin>>d[i]; 
        if (my_set.find(d[i])!=my_set.end())
        { 
            for (li j=0; j<n; j++) if  ((a[j].second == d[i]) && (t[j] ==0))
            {
                t[j] = 1;  
                break; 
            }
            t[n] = 1; 
        }
        else t[n] = 0; 
    }
    int s = 0; 
    for (int x:t) if (x==0) {s = 1; break;}
    if (s==0) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl; 
}
int main() 
{
    li t; cin>>t; 
    for (li h=0; h<t; h++) solve(); 
    return 0; 
}