#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string s; 
    cin>>s; 
    long k; 
    cin>>k; 
    long long L(0),res(0); 
    vector<long> alphabet_count(26,0); 
    for (int R = 0; R<s.size(); R++) 
    {
        alphabet_count[s[R]-'a'] ++; 
        while (*max_element(alphabet_count.begin(), alphabet_count.end())>k) 
        {
            alphabet_count[s[L]-'a'] --; 
            L++; 
        }
        res += (R-L)+1; 
    }
    cout<<res<<endl; 
}
int main() 
{
    int T; 
    cin>>T; 
    while (T--) solve(); 
}