#include <bits/stdc++.h>
using namespace std; 
const int N = 40;  
int inc_forward[N]; 
void solve() 
{
    string s; 
    cin >> s; 
    int num = 0; 
    while (s.size() > 1) 
    {
        num += s[s.size() - 1] - '0'; 
        s.erase(s.size() - 1 , 1); 
        if (num == 0) continue; 
        else num = (num / 10) + inc_forward[num % 10] / 10; 
    }
    num += s[s.size() - 1] - '0'; 
    while (num >= 10) {
        int last = num % 10; 
        while (num % 10 != 0) num += last; 
        num /= 10; 
    }
    while (num != inc_forward[num] / 10) 
    {
        num = inc_forward[num] / 10; 
    }
    cout << num << endl; 
}
int make(int n) 
{
    int a = n; 
    while (a % 10 != 0) a += n; 
    return a; 
}
int main() 
{
    int tc; 
    cin >> tc; 
    for (int i = 1; i <= 9; ++i) inc_forward[i] = make(i); 
    // for (int i = 1; i <= 9; ++i) cout << inc_forward[i]<<' '; 
    while (tc--) solve(); 
}