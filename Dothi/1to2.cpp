//Chuyen doi ma tran ke thanh danh sach canh 
#include <bits/stdc++.h>
using namespace std; 
#define maxRange 100 
void solve() {
    int n; cin>>n; 
    int a[maxRange][maxRange]; 
    for (long i = 1; i<=n; ++i) 
    {
        for (long j = 1; j<=n; ++j) cin>>a[i][j]; 
    }
    multiset<pair<int,int>> s; 
    for (long i = 1; i<=n; ++i) 
    {
        for (long j = 1; j<=n; ++j) if (a[i][j]) 
        {
            s.insert(make_pair(i,j)); 
            s.insert(make_pair(j,i));  
        }
    }
    for (pair<int,int> x:s) cout<<x.first<<"  "<<x.second<<endl; 
}
int main() 
{
    solve(); 
}