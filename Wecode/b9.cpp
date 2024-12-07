#include <bits/stdc++.h>
using namespace std; 
const int maxn = 1e4; 
int a[maxn]; 
bool c[maxn]; 
int n; 
void Try(int i) 
{
    for (int j = 1; j <= n; ++j) if (c[j]) 
    {
        a[i] = j; 
        c[j] = false; 
        if (i == n) {
            for (int t = 1; t <= n; ++t) cout<<a[t]; 
            cout<<endl; 
        } else Try(i + 1); 
        c[j] = true; 
    }
}
int main() 
{
    cin >> n; 
    memset(c,1,sizeof(c)); 
    Try(1); 
}