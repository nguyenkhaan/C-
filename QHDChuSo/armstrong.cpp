#include <bits/stdc++.h>
using namespace std; 
#define int long long 
set<int> arms; 
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int deg = to_string(num).size(); 
    while (num > 0) {
        sum += (int)pow(num % 10, deg);
        num /= 10;
    }
    return sum == original;
}
int f[19][100000][2]; 
int dp(int inx, int sum, int flag, string &x) {
    if (inx == x.size()) {
        if (isArmstrong(sum)) {
            arms.insert(sum);  
        }
        return 1; 
    }
    if (f[inx][sum][flag] != -1) return f[inx][sum][flag]; 
    int up_bound = 9;
    if (!flag) up_bound = x[inx] - '0';
    int ans = 0;
    for (int j = 0; j <= up_bound; ++j) {
        int _sum = sum * 10 + j; 
        ans += dp(inx + 1, _sum, j < up_bound || flag, x); 
    }
    return f[inx][sum][flag] = ans; 
}
int calc(string x) {
    x = "h" + x; 
    memset(f, -1, sizeof(f)); 
    int ans = dp(1, 0, 0, x); 
    return ans;
}

signed main() {
    int l, r;
    cin >> l >> r;
    string _l = to_string(l - 1); 
    string _r = to_string(r);
    calc(_r); 
    calc(_l); 
    for (int x : arms) {
        cout<<x<<endl;
    }
}
