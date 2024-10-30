#include <bits/stdc++.h>
using namespace std; 
#define endl cout<<"\n"
void solve() 
{
    int n; 
    cin >> n; 
    if (n == 1 || n == 3) {
        cout<<"-1 \n"; 
        return; 
    }
    if (n == 5) {
        cout<<"36366 \n";
        return; 
    }
    if (n % 2 == 0) 
    {
        for (int i = 1; i <= n-2; ++i) cout<<'3'; 
        cout<<"66"; 
        endl; 
    }
    else  
    {
        for (int i = 1; i <= n - 5; ++i) cout<<'3'; 
        cout<<"36366"; 
        endl; 
    }
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}