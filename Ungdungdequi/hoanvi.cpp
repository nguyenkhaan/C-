#include <bits/stdc++.h>
using namespace std; 
#define endl cout<<endl 
int a[1000]; 
int n; 
bool choose[1000]; //true -> chua duoc chon 
void Try(int i) 
{
    for (int j = 1; j <= n; ++j) if (choose[j]) 
    {
        a[i] = j; 
        choose[j] = 0; 
        if (i == n) {
            for (int t = 1; t <= i; ++t) cout<<a[t]<<' '; 
            endl;  
        } else Try(i + 1); 
        choose[j] = 1; 
    }
}
int main() 
{
    memset(choose,true,sizeof(choose)); 
    cin>>n; 
    Try(1); 
}