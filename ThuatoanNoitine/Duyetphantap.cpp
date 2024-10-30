//Duyet phan tap 
//Chia mang can duyet ra thanh 2 tap.
//Chuan bi thong tin cua tap ben trai, sau do tim cach ghep voi tap ben phai 
#include <bits/stdc++.h>
using namespace std; 
int n,m; 
vector<int> a; 
vector<int> w; 
int ans = 0 ; 
void backTrack(int pos, int sum, int id, int fin) 
{
    if (pos > fin) 
    {
        if (id == 1) 
        {
            if (sum <= m) w.push_back(sum); 
        }
        else 
        {
            int index = upper_bound(w.begin() , w.end()) - w.begin() - 1; 
            ans += index; 
        }
        return; 
    }
    backTrack(pos + 1, sum , id, fin) 
    backTrack(pos + 1, sum + a[pos] , id, fin); 
}
int main() 
{
    cin>>n>>m; 
    for (int i = 1; i <= n; ++i) cin>>a[i];  
    backTrack(1,0,1,n / 2); 
    sort(w.begin() , w.end()); 
    backTrack(n/2 + 1, 0 , 2 , n); 
    cout<<ans<<endl; 
}