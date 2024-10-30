#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#pragma optimize("O3") 
//Haysuy nghi linh hoat, suy nghĩ tới cái gì gần nó nhất song song với thuật 
#define    fast  ios::sync_with_stdio(false), cin.tie(0)
template<class X, class Y> bool minimize(X &a, Y &b) 
{
    if (a > b) return a = b, true; 
    return 0; 
}
#define endl cout<<"\n" 
const int maxN = 1e9; 
void solve() 
{
    int n; 
    cin >> n; 
    int a[n + 1]; 
    for (int i = 1; i <= n; ++i) cin >> a[i]; 
    sort(a + 1, a + 1 + n); 
    if (n == 1) {
        cout<<"1"; 
        endl; 
        return; 
    }
    if (n == 2) {
        cout<<a[2] - a[1]; 
        endl; 
        return; 
    }
    int ans = 0; 
    for (int i = 1; i <= n; ++i) ans = max(ans,a[i] - a[i-1]); 
    if (n % 2 != 0) 
    {
        //Nếu như không chia hết cho 2 thì ta lần lượt xét hiệu của các số lớn hơn, trừ cho chính giá trị a[i] 
        //thực hiện minimize cái giá trị này 
        for (int i = 1; i <= n; ++i) 
        {
            vector<int> v; 
            for (int j = 1; j <= n; ++j) if (i != j) v.push_back(a[j]); 
            int temp = v[1] - v[0];  
            for (int j = 1; j < v.size(); j += 2) temp = max(temp , v[j] - v[j-1]); 
            minimize(ans ,temp); 
        }
    }
    cout<<ans; 
    endl; 
}
signed main() 
{
    int tc; 
    cin >> tc; 
    while (tc--) solve(); 
}