#include <bits/stdc++.h>
using namespace std;
long long Fold(long long a, long long b) {
    long long folds = 0;
    while (a > b) {
        a = (a+1)/2;   
        folds++;
    }
    return folds;
}
void solve() 
{
    long long a,b,c,d; 
    cin>>a>>b>>c>>d; 
    if (c < d) swap(c, d);
    long long res1 = Fold(a,c) + Fold(b,d);
    long long res2 = Fold(a,d) + Fold(b,c);
    cout<<min(res1,res2); 
}

int main() 
{
    solve(); 
}
