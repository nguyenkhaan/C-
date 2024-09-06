#include <bits/stdc++.h>
using namespace std; 
int x[100],y[100]; 
int cnt = 0; 
void extendedEuclid(int a, int b) 
{
    if (b == 0) 
    {
        x[0] = 1; 
        y[0] = 0; 
        return; 
    }
    extendedEuclid(b,a%b); 
    cnt++; 
    x[cnt] = y[cnt-1];  
    y[cnt] = x[cnt-1] - (a/b)*y[cnt-1]; 
}
int main() 
{
    extendedEuclid(240,46);
    for (int i=0; i<=cnt; i++) cout<<x[i]<<"  "<<y[i]<<endl; 
}