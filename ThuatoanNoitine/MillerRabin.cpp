#include <bits/stdc++.h>
using namespace std; 
/*
Một số N luôn luôn có ước từ [1 -> sqrt(N)] [sqrt(N) -> N] 
N - 1 = 2^r * d (d là 1 số lẻ) 
- Chọn ra 1 số a bất kì [2.. N - 1] 2,3,5,7,61... 
- p = a1^d % n 
(p = 1 || p = n - 1) -> return true 
- p = a2^d % n 
- Nếu không nằm trong 2 giá trị trên thì 

B1: p = p * p % n (r - 1 lần) 
-> p = (n-1) -> true 
-> return false nếu không lụm được 
*/
#include <bits/stdc++.h>
using namespace std; 
#define int long long 
const int test[3] = {2,7,61}; 
int quick_square(int a, int d, int n) 
{
    int res = 1; 
    while (d) 
    {
        if (d & 1) res = (res * a) % n; 
        a = (a * a) % n; 
        d /= 2; 
    }
    return res % n; 
}
void analyze(int &n, int &r, int &d) 
{
    int m = n - 1; 
    while (m % 2 == 0) {
        ++r; 
        m /= 2; 
    }
    d = (n - 1) / (1<<r); 
}
bool check(int &n, int &r, int &d, int a) 
{
    int p = quick_square(a,d,n);  //phai dung thuat toan quick_square de tranh bi tran so
    if (p == 1 || p == n - 1) return true; 
    for (int i = 1; i <= r-1; ++i)
    {
        p = p*p % n; 
        if (p == n-1) return true; 
    }
    return false; 
}
bool solve() 
{
    int n; 
    cin >> n; 
    if (n % 2 == 0) return false;  //khong la so nguyen to 
    if (n == 2 || n == 7 || n == 61) return true; 
    int r,d;  
    analyze(n,r,d); 
    bool ans = check(n,r,d,test[0]) & check(n,r,d,test[1]) & check(n,r,d,test[2]); 
    return ans;
}
signed main() 
{
    cout<<solve(); 
}