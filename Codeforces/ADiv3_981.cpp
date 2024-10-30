/*1   1   -1
2   3    2
3   5   -3
4   7    4
5   9   -5
6  11
7  13
8  15
9  17
10  19 
....-> n 
hay nói đúng hơn, vị trí của x tại lần đi thứ i là (-1)^i * i 
và ta có 
-n <= (-1)^i * i <= n 
Ai là người đi cuối cùng 
hay nói đúng hơn là 
|(-1)^i * i | <= n 
|i| <= n */ 
#include <bits/stdc++.h>
using namespace std; 
#define endl cout<<endl 
void solve() 
{
    int n; 
    cin >> n; 
    if (n % 2 == 0) cout<<"Sakurako"; 
    else cout<<"Kosuke"; 
    endl; 
}
int main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}