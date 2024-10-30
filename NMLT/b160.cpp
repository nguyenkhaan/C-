#include <iostream>
using namespace std;
#define ll long long

ll calculate(ll k, ll x)
{
    if ((k + x - 1) % (2 * x - 1) == 0) return (k + x - 1) / (2 * x - 1);
    return 0;
}

int main() {
    int t;
    cin >> t;
    ll ansM, ansN, c, k;
    while (t--)
    {
        cin >> k;
        ansM = 0; ansN = 10000000000000;
        for (ll i = 2; i * i <= k; i++)
            {
                c = calculate(k*2, i);
                if (i > c && c != 0) break;
                if (c)
                {
                    ansM = i;
                    ansN = c; 
                }
            }    
        if (ansM == 0) cout << -1 << " " << -1 << endl;
        else cout << ansM - 1 << " " << ansN - 1 << endl;
    }
    return 0;
}