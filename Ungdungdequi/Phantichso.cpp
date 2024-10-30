#include <bits/stdc++.h>
using namespace std; 
#define endl cout<<endl 
int a[1000]; 
int n; 
void Try(int i, int k, int cursum) 
{
    for (int j = k; j >= 1; --j) 
    {
        if (cursum + j <= n) 
        {
            a[i] = j;  
            cursum += j;  
            if (cursum == n) {
                for (int t = 0; t <= i; ++t) cout<<a[t]<<' '; 
                endl; 
            } else Try(i + 1, j , cursum); 
            cursum -= j; 
        }
    }
}
int main() 
{
    cin>>n; 
    Try(0,n,0); 
}