#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n,k; 
    cin>>n>>k; 
    vector<int> a(n); 
    for (int i = 0; i<n; ++i) cin>>a[i]; 
    if (n == 1) 
    {
        if (k >= a[0]) cout<<(a[0]*(a[0] + 1))/2<<endl; 
        return;  
    }
    sort(a.begin() , a.end()); 
    int Max1 = a[n-1]; 
    int Max2 = a[n-2];  
    int m = ((Max1 + Max2 + 1)*(Max1 - Max2))/2 + Max2; 
    int _ng = k / (Max1 - Max2 + 1); 
    int _r = k - _ng * (Max1 - Max2 + 1); 
    int res = _ng * m + _r * ((Max1*2 - _r + 1)/2); 
    cout<<res<<endl; 
}
int main() 
{
    solve(); 
}