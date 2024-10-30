#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#define For(a,b,c) for(a = b; a <= c; ++a)
#define all(a) a.begin(),a.end()

int binary_search(vector<int> &a, int l, int r, int &x, int k)  
{
    int ans = -1; 
    while (l <= r) 
    {
        int mid = (l + r)/2; 
        if (a[mid] - k <= x && a[mid] + k >= x) {
            ans = mid; 
            r = mid - 1; // tiếp tục tìm kiếm bên trái
        } else if (a[mid] < x - k) {
            l = mid + 1; // di chuyển về bên phải
        } else {
            r = mid - 1; // di chuyển về bên trái
        }
    }
    return ans; 
}

void solve() 
{
    int n, m, k; 
    cin >> n >> m >> k; 
    vector<int> a(n); 
    vector<int> b(m); 
    int i; 
    For(i,0,n-1) cin >> a[i]; 
    For(i,0,m-1) cin >> b[i]; 
    sort(all(a)); 
    sort(all(b));  
    int pos(0), fin(n-1);  
    int d = 0; 
    For(i,0,m-1) 
    {
        int _pos = binary_search(a, pos, fin, b[i], k); 
        if (_pos != -1) {
            ++d; 
            pos = _pos + 1; // Cập nhật pos để tránh tìm lại phần tử đã khớp
        }
    }
    cout << d << endl; 
}

main() 
{
    solve(); 
}
