#include <bits/stdc++.h>
using namespace std; 
/*
1. Tối ưu bằng toán: Có cách nào biểu diễn OK không, phân tích biểu thức đi 
2. Lách luật, nhanh hơn cho mấy bài toán khó tìm ra lời giải 
*/
long ans = 0; 
long n; 
void binarysearch(int l, int r, int u, int v) 
{
    if (l<=r) {
        long m = (l+r)/2; 
        if (m*m + u*u + v*v == n) {
            ans = m; 
            return;  
        }
        if (m*m + u*u +v*v >n) binarysearch(l,m,u,v); 
        if (m*m + u*u +v*v <n) binarysearch(m+1,r,u,v); 
    }
}
void solve() 
{
    cin>>n; 
    int k1 = sqrt(n);
    int k2 = sqrt(k1);
    int k3 = sqrt(k2);
    vector<long> v; 
    bool ok = false; 
    for (long i = 1; i<=k1; ++i){
        for (long j = 1; j<=min((long)sqrt(n-i*i),i); ++j){
            v.push_back()
        }
    }
    int ans = 0; 
    for (int i = 0; i<v.size(); i++) 
    {
        // cout<<v[i]<<endl; 
        if ((int)sqrt(v[i])*(int)sqrt(v[i]) == v[i]) ++ans; 
    }
    cout<<ans; 
}
int main() 
{
    solve(); 
}