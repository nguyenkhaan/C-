#include <bits/stdc++.h>
using namespace std;
#define An UwU
#define int long long 
const int maxn = 1e3 + 5;
const int INF = 1e9; 
int dp[2][maxn][maxn];
int a[maxn][maxn];
int m, n;
int countNums(int num, int digit) {
    if (num == 0) return INF; 
    int d = 0;
    while (num % digit == 0) {
        ++d;
        num /= digit;
    }
    return d;
}

void fillDP(int num) 
{
    int index = (num == 2) ? 0 : 1;
    for (int i = 0; i <= m; ++i)
        for (int j = 0; j <= n; ++j)
            dp[index][i][j] = INF;  
    
    dp[index][1][1] = countNums(a[1][1], num);
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i > 1)
                dp[index][i][j] = min(dp[index][i][j], dp[index][i - 1][j] + countNums(a[i][j], num));
            if (j > 1)
                dp[index][i][j] = min(dp[index][i][j], dp[index][i][j - 1] + countNums(a[i][j], num));
        }
    }
}

void printZeroPath(int x, int y) 
{
    cout << 1 << endl;
    for (int i = 1; i < x; ++i)
        cout << "D";
    for (int j = 1; j < y; ++j)
        cout << "L";
    for (int i = x; i < m; ++i)
        cout << "D";
    for (int j = y; j < n; ++j)
        cout << "L";
}

void solve() 
{
    cin >> m >> n; 
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    fillDP(2);
    fillDP(5);

    int index = (dp[1][m][n] < dp[0][m][n]) ? 1 : 0;

    if (dp[index][m][n] > 0) {
        for (int i = m; i >= 1; --i) {
            for (int j = 1; j <= n; ++j) {
                if (a[i][j] == 0) {
                    printZeroPath(i, j);
                    return;
                }
            }
        }
    }

    cout << dp[index][m][n] << endl;
    string path;
    int x = m, y = n;
    while (x > 1 || y > 1) {
        if (x > 1 && dp[index][x - 1][y] < dp[index][x][y - 1]) {
            --x;
            path = "D" + path;
        } else {
            --y;
            path = "L" + path;
        }
    }
    cout << path << endl;
}

signed main() 
{
    solve();
  
}
/*   /\_/\
*   (= ._.)
*   / >  \>
*/