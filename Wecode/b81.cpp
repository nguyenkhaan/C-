#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin >> n; 
    int d = 0; 
    for (int a = 1; a*2 <= n; ++a) {
        for (int b = a + 1; b*b <= 2*n + a*a - a; ++b) {
            int sum = (b + a)*(b - a + 1)/2; 
            if (sum == n) ++d; 
            if (sum > n) break; 
        }
    }
    cout<<d; 
}