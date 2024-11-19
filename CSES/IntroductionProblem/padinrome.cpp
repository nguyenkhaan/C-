#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#pragma GCC optimize("fast-math") 
#pragma GCC optimize("inline-functions") 
const int maxN = 27; 
#define NO cout<<"NO SOLUTION\n" 
#define all(a) a.begin(),a.end() 
#define For(a,b,c) for (a = b; a < c; ++a) 
void solve() 
{
    string s; 
    cin >> s;  
    int n = s.size(); 
    int i; 
    vector<int> a(maxN , 0); 
    //A = 1 , B = 2 
    string ans = ""; 
    int flag = 0; 
    For(i,0,n) a[(int)(s[i]) - 64]++; 
    For(i,1,maxN) if (a[i] & 1) ++flag; 
    if (flag < 2) 
    {
        char ch = ' '; 
        vector<char> ans(n + 1); 
        int pos = 0; 
        For(i,0,maxN) if (a[i] != 0) {
            for (int j = 1; 2*j <= a[i]; ++j) {
                ans[pos] = (char)(i + 64); 
                ans[n - pos -  1] = char(i + 64); 
                ++pos; 
            }
            if (a[i] & 1) ch = (char)(i + 64); 
        }
        if (ch != ' ') ans[n / 2] = ch;  
        For(i,0,n) cout<<ans[i];  
    }
    else NO; 

}
int main() 
{
    solve(); 
}