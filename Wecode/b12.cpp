#include <bits/stdc++.h>
using namespace std; 
#define endl cout<<"\n" 
#pragma GCC optimize("O3") 
int main() 
{
    int h; 
    cin >> h; 
    int line = 1; 
    int space = h*2 - 2; 
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= space; ++j) cout<<' '; 
        for (int j = 1; j <= line; ++j) cout<<"* ";
        line += 2; 
        space -= 2; 
        endl; 
    }
}