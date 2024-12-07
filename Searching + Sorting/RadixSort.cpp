#include <bits/stdc++.h>
#define For(a,b,c) for(a = b; a <= c; ++a) 
#define num_digit 10 
using namespace std; 
int main() 
{
    int n; 
    cin >> n; 
    vector<int> a(n); 
    int i , ma(0); 
    For(i, 0 , n-1) {
        cin >> a[i]; 
        ma = max(ma , a[i]); 
    }
    int exp = 1; 
    vector<vector<int>> bucket(num_digit); 
    while ((ma/exp)>0)
    {
        while (a.size() > 0) 
        {
            int num = a[a.size() - 1];  //khong can phan biet thu tu 
            a.pop_back(); 
            int digit = (num / exp) % 10; 
            bucket[digit].push_back(num); 
        }
        for (int i = 0; i <= 9; ++i) 
        {
            while (bucket[i].size() > 0) {
                a.push_back(bucket[i][bucket[i].size() - 1]); 
                bucket[i].pop_back(); 
            } 
        }
        exp *= 10; 
    }
    for (auto x : a) cout<<x<<' '; 
}