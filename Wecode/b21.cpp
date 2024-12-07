#include <bits/stdc++.h>
using namespace std; 
const int maxN = 105; 
void solve() 
{
    int a[maxN][maxN]; 
    int n; 
    cin >> n; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> a[i][j];  
    }
    cout<<"Matrix: "<<endl; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) 
            if (a[i][j] & 1) cout<<"0 "; 
            else cout<<a[i][j]<<" "; 
        cout<<endl; 
    }
}
int main() 
{
    solve(); 
}