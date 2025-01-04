#include <bits/stdc++.h>
using namespace std; 
vector<string> bitmask(int n) 
{
    vector<string> res; 
    for (int i = 0; i < (1<<n); ++i) 
    {
        string token = "";
        for (int j = 0; j < n; ++j) 
            if (1 << j & i) token += "1"; 
            else token += "0"; 
        res.push_back(token); 
    }
    return res; 
}
void solve() 
{
    const int N = 7;  
    char a[N][N]; 
    int h,w,k; 
    cin >> h >> w >> k; 
    for (int i = 0; i < h; ++i) 
        for (int j = 0; j < w; ++j) cin >> a[i][j]; 
    vector<string> hh = bitmask(h); 
    vector<string> ww = bitmask(w); 
    int cnt = 0; 
    for (int i = 0; i < hh.size(); ++i) 
    {
        for (int j = 0; j < ww.size(); ++j) 
        {
            int d = 0; 
            for (int t1 = 0; t1 < h; ++t1) if (hh[i][t1] == '1') 
            {
                for (int t2 = 0; t2 < w; ++t2) if (ww[j][t2] == '1') {
                    if (a[t1][t2] == '#') d++; 
                }
            }
             if (d == k) cnt += 1;
        }
    }
    cout<<cnt<<endl; 
}
int main() 
{
    solve(); 
}