#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(false), cin.tie(0)
#define all(x) x.begin(), x.end()
const int maxn = 1e6;
const int MOD = 1e9 + 7;
const int INF = 1e9; 
int prime[maxn]; 
vector<int> ep; 

// Sàng Eratosthenes để tạo danh sách số nguyên tố
int power(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}

int binary_search(int l, int r, int u, int t) 
{
    int pos = -1; 
    while (l <= r) 
    {
        int mi = (l + r) / 2; 
        if (log(ep[mi]) * t > log(u)) { // Kiểm tra tràn số
            r = mi - 1; 
            continue;
        }
        int value = power(ep[mi], t); // Sử dụng power thay vì pow
        if (value > u) 
            r = mi - 1; 
        else {
            pos = mi; 
            l = mi + 1; 
        }
    }
    return pos; 
}


void sieve() 
{
    memset(prime, 1, sizeof(prime)); 
    prime[0] = prime[1] = 0; // 0 và 1 không phải số nguyên tố
    for (int i = 2; i * i <= maxn; ++i) 
        if (prime[i]) 
            for (int j = i * i; j <= maxn; j += i) 
                prime[j] = 0;
    
    for (int i = 2; i <= maxn; ++i) 
        if (prime[i]) 
            ep.push_back(i); 
}
void solve()
{
    int n, k; 
    cin >> n >> k;
    sieve(); 

    // Lambda function để sắp xếp 3 số theo thứ tự giảm dần
    const auto sorting = [](int &t1, int &t2, int &t3) {
        int t = t1 + t2 + t3; 
        t1 = max({t1, t2, t3}); 
        t3 = min({t1, t2, t3}); 
        t2 = t - t1 - t3; 
    }; 
    
    int res = 0; 
    for (int i = 1; i <= 18; ++i) {
        for (int j = 1; j <= 18; ++j) {
            int t1 = i; 
            int t2 = j; 

            // Tính toán t3
            if (k % ((t1 + 1) * (1 + t2)) != 0) continue; 
            int t3 = k / ((1 + t1) * (1 + t2)) - 1; 
            if (t3 <= 0) continue; // Bỏ qua nếu t3 không hợp lệ

            // Sắp xếp lại t1, t2, t3
            sorting(t1, t2, t3);

            int pos, ans = 1; 
            // Tìm số nguyên tố tương ứng với t1
            pos = binary_search(0,  ep.size() - 1, n, t1); 
            if (pos == -1) continue; // Nếu không tìm được, bỏ qua
            ans *= power(ep[pos], t1);             n /= power(ep[pos], t1); 

            // Tìm số nguyên tố tương ứng với t2
            pos = binary_search(0, ep.size() - 1, n, t2); 
            if (pos == -1) continue; 
            ans *= power(ep[pos], t2); 
            n /= power(ep[pos], t2); 

            // Tìm số nguyên tố tương ứng với t3
            pos = binary_search(0, ep.size() - 1, n, t3); 
            if (pos == -1) continue; 
            ans *= power(ep[pos], t3); 
            // Cập nhật giá trị lớn nhất
            cout<<res<<endl; 
            res = max(res, ans); 
        }
    } 
    cout << res << endl; 
}

signed main()
{
    fast;
    solve(); 
    return 0;
}
