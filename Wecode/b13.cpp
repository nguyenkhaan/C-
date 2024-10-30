#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    long n; 
    cin >> n;
    string s; 
    s = to_string(n);  
    int r = s.size() - 1; 
    while (r > 0) 
    {
        while (s[r] == '0') --r; 
        if (r >= 1) {
            int num = s[r] - '0'; 
            s[r] = '0'; 
            if (num >= 5) s[r-1] = ((s[r-1] - '0' + 1) + '0'); 
        }
        --r; 
    }
    cout<<s; 
}