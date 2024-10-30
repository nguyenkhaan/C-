#include <bits/stdc++.h>
using namespace std; 
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
#pragma GCC optimzie("O3") 
#define endl cout<<"\n" 
#define int long long 
int sum_1(int n, int x) 
{
    int ans = 0; 
    for (int i = 0; i <= n; ++i) ans += ((int)pow(x,i)); 
    return ans; 
}
double sum_2(int n, int x) 
{
    double ans = 0; 
    for (int i = 0; i <= n; ++i) ans += (pow(x,i*2)); 
    return ans; 
}
double sum_3(int n, int x) 
{
    int gt = 1; 
    double ans; 
    for (int i = 0; i <= n; ++i) 
    {
        double _tu = pow(x,i); 
        if (i == 0 || i == 1) gt = 1; 
        else gt *= i; 
        ans += (_tu / gt); 
    }
    return ans; 
}
signed main() 
{
    int n,x; 
    cin >> n >> x;  
    cout<<sum_1(n,x);  
    endl; 
    cout<<sum_2(n,x); 
    endl; 
    cout<<sum_3(n,x); 
}