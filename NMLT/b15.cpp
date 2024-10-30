#include <bits//stdc++.h>
using namespace std; 
int main() 
{
    string s; 
    cin>>s; 
    int n = s.size(); 
    int sum = 0; 
    string res; 
    for (int i = 0; i < n; ++i) sum += (s[i] - '0'); 
    if (sum % 3 == 0) res = s; 
    else res = ""; 
    for (int i = 0; i < n; ++i) 
    {
        for (int j = ((i == 0)?1:0); j <= 9; ++j) {
            string st = s; 
            if (st[i] == (j + '0')) continue; 
            else st[i] = (j + '0'); 
            if (((sum - (s[i] - '0') + j) % 3 == 0) && (st != s)) {
                if ((res == "" || res == s || res < st) && st <= "9999999999") res = st; 
            }
        }
    }
    cout<<res<<endl; 
}