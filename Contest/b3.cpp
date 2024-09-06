#include <bits/stdc++.h>
//hando_taiya 
using namespace std;
void solve() 
{
    string s;
    int k;
    cin>>s>>k; 
    int n = s.size();
    vector<int> c(26,0); 
    long long left = 0, es = 0; 
    for (int right = 0; right<n; right++) 
    {
        c[s[right]-'a']++;
        while (*max_element(c.begin(), c.end())>k) 
        {
            c[s[left]-'a']--;
            left++;
        }
        res+= right-left+1; 
    }
    cout << res<< endl;
}
int main() 
{
    int T; cin>>T; 
    while (T--) solve(); 
}
