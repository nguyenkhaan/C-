#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string s; 
    cin>>s; 
    vector<pair<int,int>> a(27); 
    for (int i = 0; i < 26; ++i) a[i].first = a[i].second = 0;  
    int q; 
    cin>>q; 
    for (int i = 0; i<q; ++i) 
    {
        char ch; 
        int x; 
        cin>>ch>>x; 
        a[(int)ch - 96].first += x; 
        a[(int)ch - 96].second += x; 
    }
    int res = 0; 
    for (int i = 0; i<s.size(); ++i) 
    {
        if (a[(int)s[i] - 96].second == 0) res += 1; 
        else 
        {
            if (a[(int)s[i] - 96].first == a[(int)s[i] - 96].second) {
                a[(int)s[i] - 96].first -= 2; 
                res += 2; 
            } 
            else {
                a[(int)s[i]- 96].first -= 1;  
                res += 1; 
            }
            if (a[(int)s[i] - 96].first <= 0) a[(int)s[i] - 96].first += a[(int)s[i] -96].second; 
        }
    }
    cout<<res<<endl; 
}
int main() 
{
    solve(); 
}