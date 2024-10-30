/*
Đề bài: Bạn có N người và ban đầu không ai là bạn với ai. 
Có M yêu cầu về việc kết bạn giữa hai người. 
Sau khi thực hiện các yêu cầu này, 
bạn cần xác định xem hai người x, y có phải là bạn của nhau hay không.
*/
#include <bits/stdc++.h>
using namespace std; 
int n; 
int leader[1000]; 
void make_set() 
{
    for (int i = 1; i <= n; ++i) leader[i] = i; 
}
int _find(int a) 
{
    if (a == leader[a]) return a; 
    else return _find(leader[a]); 
} 
void _union(int a, int b) 
{
    a = _find(a); 
    b = _find(b); 
    if (a == b) return; 
    leader[a] = b; 
}
int main() 
{
    cin>>n; 
    int m; cin>>m; 
    make_set(); 
    for (int i = 1; i <= m; ++i) 
    {
        int x,y; 
        cin>>x>>y; 
        _union(x,y); 
    }
    int l,r; 
    cin>>l>>r; 
    if (_find(l) == _find(r)) cout<<"YES"; 
    else cout<<"NO"; 
}