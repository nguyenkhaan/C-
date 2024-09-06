#include <bits/stdc++.h>
using namespace std; 
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
void solve() 
{
    long long n,k,h; 
    cin>>n>>k>>h; 
    queue<long long> q; 
    vector<long long> a(n); 
    for (long long i = 0; i<n; i++) cin>>a[i]; 
    sort(a.begin(),a.end()); 
    q.push(a[0]); 
    for (long long i = 1; i< n; i++) 
    {
        while ((abs(a[i] - q.front()) > h) && (q.empty() == false)) q.pop(); 
        q.push(a[i]); 
    }
    if (q.size() >= k) YES;
    else NO; 
}
int main() 
{
    int T; 
    cin>>T; 
    while (T--) solve(); 
}