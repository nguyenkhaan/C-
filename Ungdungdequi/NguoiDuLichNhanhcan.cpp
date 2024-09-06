#include <iostream> 
#include <stdbool.h>
using namespace std; 
/*
Nhanh can: Chi phí nhỏ nhất có thể đạt được trong lời gọi quay lui hiện tại 

*/ 
int x[1000]; 
int n = 4; 
int ans = 10000; 
bool t[1000]; 
int sum = 0;
int a[5][5] = 
    {
        {0,0,0,0,0},
        {0,0,85,26,81}, 
        {0,85,0,77,97}, 
        {0,26,77,0,26},
        {0,81,97,26,0}
    }; 
void Try(int i) 
{
    for (int j=2; j<=n; j++) if (t[j])
    {
        x[i] = j; 
        t[j] = false; 
        if (i>=2) sum+=a[x[i]][x[i-1]]; 
        if (i==n) 
        {
            ans = min(ans,sum+a[x[n]][1]); 
        }
        else if (sum + (n-i+1)*26 < ans)
        {
            Try(i+1); 
        }
        sum-=a[x[i]][x[i-1]];
        t[j] = true; 
    }
}
int main() 
{
    for (int i=1; i<=n; i++) t[i] = true; 
    x[1] = 1; t[1] = false; 
    Try(2);
    cout<<ans;

}