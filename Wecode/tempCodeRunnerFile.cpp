#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O2") 
#pragma GCC optimize("fast-math")  
#pragma GCC optimize("inline-functions")  
#define int long long 
#define maxFloor(m,floor) ((m - floor + 3)*2)
#define NO cout<<"-1 \n" 
int n,a,b; 
bool validRoom(int a,int b) 
{
    if (a < 1 || a > n) return false; 
    if (b < 2 || b > maxFloor(n,a)) return false; 
    return true; 
}
void solve() 
{
    cin >> n; 
    cin >> a >> b; 
    //Tim hang tren 
    if (validRoom(a+1 , b-2)) cout<<a+1<<" "<<b-2<<endl; 
    else NO; 
    //Tim ben phai 
    if (validRoom(a,b-2)) cout<<a<<" "<<b-2<<endl; 
    else NO;
    //Tim hang duoi 
    if (validRoom(a-1,b+2)) cout<<a-1<<" "<<b+2<<endl; 
    else NO; 
    //Tim ben trai 
    if (validRoom(a,b+2)) cout<<a<<" "<<b+2<<endl;  
    else NO; 
}
signed main() 
{
    solve(); 
    return 0;
}