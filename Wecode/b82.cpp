#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O2") 
#pragma GCC optimize("fast-math")  
#pragma GCC optimize("inline-functions")  
#define int long long 
#define NO cout<<"-1 \n" 
int n,a,b; 
int maxFloor(int m,int floor) 
{
    return (m - floor + 3)*2; 
}
void solve() 
{
    cin >> n; 
    cin >> a >> b; 
    if (b % 2 != 0 || a > n || b > maxFloor(n,a)) {
        NO; NO; NO; NO; 
        return ; 
    }
    //Tim hang tren 
    if (a + 1 <= n && b - 2 >= 2) cout<<a+1<<" "<<b - 2<<endl; 
    else NO; 
    //Tim ben phai 
    if (a <= n && b - 2 >= 2) cout<<a<<" "<<b-2<<endl; 
    else NO; 
    //Tim hang duoi 
    if (a-1 >= 1 && b+2 <= maxFloor(n,a-1)) cout<<a-1<<" "<<b+2<<endl; 
    else NO; 
    //Tim ben trai 
    if (a <= n && b + 2 <= maxFloor(n,a)) cout<<a<<" "<<b+2<<endl; 
    else NO; 
}
signed main() 
{
    solve(); 
    return 0;
}