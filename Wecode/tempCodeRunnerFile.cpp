#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e2;
bool c[maxn];
int idx[maxn];
map<string, int> mp;

void Try(int i, int n, vector<string>& s, string& a) {
    for (int j = 1; j <= n; ++j) {
        if (c[j]) {
            idx[i] = j;
            c[j] = false;
            if (i == n) {
                string temp = "";
                for (int t = 1; t <= n; ++t)
                    temp += a[idx[t] - 1];
                s.push_back(temp);
            } else
                Try(i + 1, n, s, a);
            c[j] = true;
        }
    }
}

vector<string> setup(string& a, int len) {
    cin >> a;
    fill(c, c + maxn, true);
    vector<string> resA;
    Try(1, len, resA, a);
    return resA;
}

bool check(string& s1, string& s2, string& s3) {
    int y = stoi(s1);
    int m = stoi(s2);
    int d = stoi(s3);
    if (m < 1 || m > 12 || d < 1) return false;

    int dayMax = 31;
    switch (m) {
        case 4: case 6: case 9: case 11:
            dayMax = 30;
            break;
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                dayMax = 29;
            else dayMax = 28;
            if (y % 3328 == 0) dayMax = 30; 
            break;
    }
    if (m>0 && m <= 12 && d > 0 && d <= dayMax && y > 0) return true; 
    return false; 
}

void solve() {
    string Y, M, D;
    vector<string> resY = setup(Y, 4);
    vector<string> resM = setup(M, 2);
    vector<string> resD = setup(D, 2);
    set<string> res;
    for (auto& s1 : resY) {
        for (auto& s2 : resM) {
            for (auto& s3 : resD) {
                string s = s1 + " " + s2 + " " + s3;
                if (!mp.count(s)) {
                    mp[s] = 1;
                    res.insert(s); 
                }
            }
        }
    }
    cout << res.size() << endl;
    for (auto& z : res) cout << z << endl;
}

int main() {
    solve();
}
