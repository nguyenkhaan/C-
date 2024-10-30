#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin >> n; 
    int gt = 1;
    int i = 1;  
    while (gt < n) {
        i++; 
        if (gt*i <= n) gt *= i; 
        else break; 
    }
    cout<<gt; 
}