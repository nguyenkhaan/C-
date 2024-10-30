#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int v1,w1,v2,w2,mw; 
    cin >> v1 >> w1 >> v2 >> w2 >> mw; 
    int maxAns = 0; 
    if (w1 <= mw) maxAns = max(maxAns , v1); 
    if (w2 <= mw) maxAns = max(maxAns, v2); 
    if (w1 + w2 <= mw) maxAns = max(maxAns,v1 + v2); 
    cout<<maxAns; 
}