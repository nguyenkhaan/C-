#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#define goc cout<<"O"  
#define hoanh cout<<"H" 
#define endl cout<<"\n"
#define tung cout<<"T" 
void solve() 
{
    int x,y; 
    cin >> x >> y; 
    if (x*y == 0) 
    {
        if (x == 0 && y == 0) goc; 
        if (x != 0 && y == 0) hoanh; 
        if (x == 0 && y != 0) tung; 
        endl; 
        return; 
    }
    if (x > 0 && y > 0) cout<<"I"; 
    if (x < 0 && y > 0) cout<<"II"; 
    if (x < 0 && y < 0) cout<<"III"; 
    if (x > 0 && y < 0) cout<<"IV"; 
    endl; 
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}