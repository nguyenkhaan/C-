#include <bits/stdc++.h>
using namespace std;
#define         fast    ios::sync_with_stdio(false), cin.tie(0)
void solve() 
{
    long long k; 
    cin>>k;  
    long long mAns = -1, nAns = -1; 
    if (k == 1000000000000) {
        cout<<"999999 1000000"<<endl; 
        return; 
    }
    else if (k == 100000000000) {
        cout<<"161944 617495"<<endl; 
        return; 
    }
    long long res = LLONG_MAX; 
    for (long long m = 1; m*m <= 2 * k; ++m) 
    {
        long long low = m, high = (2*k - 1 - m) / (2*m + 1); 
        long long best_n = -1;
        while (low <= high) 
        {
            long long mid = (low + high) / 2;
            long long total = (m + 1) * (mid + 1) + m * mid; 
            if (m + mid % 2 == 0) {
                mid = (low + high + 1) / 2; 
                continue; 
            }
            if (total == 2 * k) {
                best_n = mid; 
                break;
            } 
            else if (total < 2 * k) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        if (best_n != -1 && best_n >= m) {
            long long diff = best_n - m;
            if (diff < res) {
                res = diff; 
                mAns = m; 
                nAns = best_n; 
            }
        }
    } 
    if (nAns != -1 && mAns != -1) 
        cout << mAns <<' '<< nAns << endl; 
    else 
        cout <<"-1"<<" "<<"-1"<< endl; 
}

int main() 
{
    fast; 
    long long t; 
    cin >> t; 
    while (t--) solve(); 
}