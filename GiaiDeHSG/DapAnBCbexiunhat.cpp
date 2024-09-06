// CPP Program to find three integers
// less than N whose LCM is maximum
#include <bits/stdc++.h>
using namespace std;
 
// function to find three integers
// less than N whose LCM is maximum
void MaxLCM(int n)
{
    // if n is odd
    if (n % 2 != 0)
        cout << n << " " << (n - 1) << " " << (n - 2);
 
    // if n is even and n, n-3 gcd is 1
    else if (__gcd(n, (n - 3)) == 1)
        cout << n << " " << (n - 1) << " " << (n - 3);
 
    else
        cout << (n - 1) << " " << (n - 2) << " " << (n - 3);
}
 
// Driver code
int main()
{
    int n = 7;
 
    // function call
    MaxLCM(n);
 
    return 0;
}
