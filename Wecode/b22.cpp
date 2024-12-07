#include <bits/stdc++.h>
using namespace std;
const int maxN = 12;
vector<int> bt(maxN, 0); 
int ha, wa, hb, wb;
void backtrack(int i, int &n, int &k, vector<vector<int>> &q) {
    for (int j = bt[i - 1] + 1; j <= n - k + i; ++j) {
        bt[i] = j;
        if (i == k) {
            vector<int> subset(bt.begin() + 1, bt.begin() + k + 1);
            q.push_back(subset);
        } else {
            backtrack(i + 1, n, k, q);
        }
    }
}
void inp(int a[maxN][maxN], int &h, int &w) {
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) cin >> a[i][j];
    }
}
bool solve() {
    cin >> ha >> wa;
    int a[maxN][maxN];
    int b[maxN][maxN];
    inp(a, ha, wa);
    cin >> hb >> wb;
    inp(b, hb, wb);
    if (ha < hb || wa < wb) return false;
    vector<vector<int>> q1;
    vector<vector<int>> q2;
    backtrack(1, ha, hb, q1);
    backtrack(1, wa, wb, q2);
    for (auto x : q1) {
        for (auto y : q2) {
            bool can = true;
            for (int i = 0; i < hb; ++i) {
                for (int j = 0; j < wb; ++j) {
                    if (b[i + 1][j + 1] != a[x[i]][y[j]]) {
                        can = false;
                        break;
                    }
                }
                if (!can) break;
            }
            if (can) return true;
        }
    }
    return false;
}

int main() {
    cout << (solve() ? "Yes" : "No") << endl;
}
