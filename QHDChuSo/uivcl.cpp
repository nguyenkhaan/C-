#include<bits/stdc++.h>
using namespace std;

const int N = 10;
#define For(i,a,b) for(int i=a;i<=b;i++)

string str;
int sz, a[N];
int dp[N][90][90][2];

int go(int pos, int even, int odd, int flag){
    if(pos > sz) {
        return even - odd == 1;
    }
    if(dp[pos][even][odd][flag] != -1){
        return dp[pos][even][odd][flag];
    }
    int lim = 9;
    if(!flag) lim = a[pos];

    int ans = 0;
    For(i,0,lim){
        if((sz - pos) & 1)
            ans += go(pos + 1, even, odd + i, i < lim || flag);
        else
            ans += go(pos + 1, even + i, odd, i < lim || flag);
    }

    return dp[pos][even][odd][flag] = ans, ans;

}
/*

*/

int cal(int n){
    str = to_string(n);
    sz = str.size();
    For(i,1,sz) a[i] = str[i-1] - '0';
    memset(dp, -1, sizeof(dp));
    int ans = go(1, 0, 0, 0);
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int tc; cin >> tc;
    while(tc--) {
        int l, r; cin >> l >> r;
        // cout << cal(l-1) << ' ' << cal(r) << "\n";
        cout << cal(r) - cal(l - 1) << "\n";
    }   

    return 0;
}