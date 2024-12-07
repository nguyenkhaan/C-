#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    int n;  
    cin >> n; 
    vector<int> a(n); 
    for (int i = 0; i < n; ++i) cin >> a[i]; 
    int ma = *max_element(a.begin(), a.end()); 
    vector<vector<int>> bucket(10); 
    int exp = 1; 
    while (ma / exp > 0) 
    {
        while (a.size() > 0) 
        {
            int num = a[a.size() - 1]; 
            a.pop_back(); 
            int digit = (num / exp) % 10; 
            bucket[digit].push_back(num); 
        }
        for (int i = 0; i <= 9; ++i) 
        {
            while (bucket[i].size() > 0) 
            {
                int num = bucket[i][bucket[i].size() - 1]; 
                a.push_back(num); 
                bucket[i].pop_back(); 
            }
        }
        exp *= 10; 
    }
    for (auto z : a) cout<<z<<" "; 
}
int main() 
{
    solve(); 
}