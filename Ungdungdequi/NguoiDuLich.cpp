#include <iostream> 
#include <stdbool.h>
using namespace std; 
/*
Cho n thanh phố đánh số từ 1-n và các ddoanjd dương hai chiều. Tron 
đó C[i][j] là chi phí đi từ thành phố thứ i đến thành phố thứ j. Tại i - i là 0 
Một người du lịch xuất phát từ thành phố 1 Muốn đi thăm tất cả các thành phố đúng 1 lần
Tính chi phí ít nhất mà người này bỏ ra
*/
//Su dung quay lui: Goi X[i] la thu tu ghe qua cua tung thanh pho 
int x[1000]; 
int n = 4; 
int MIN = 10000; 
bool t[1000]; 
int a[4][4] = 
    {
        {0,85,26,81}, 
        {85,0,77,97}, 
        {26,77,0,26},
        {81,97,26,0}
    }; 
void incauhinh() 
{
    int sum  = 0;
    for (int i=1; i<=n-1; i++) 
    {
        int h = x[i]; 
        int k = x[i+1]; 
        sum+=a[h-1][k-1]; 
    }
    sum+=a[x[n]-1][x[1]-1];
    if (MIN>sum)  MIN = sum; 
}
void try1(int i) 
{
    for (int j=1; j<=n; j++) if (t[j]) 
    {
        x[i] = j; 
        t[j] = false; 
        if (i==n) incauhinh(); 
        else try1(i+1); 
        t[j] = true; 
    }
}
int main() 
{
    for (int i=1; i<=n; i++) t[i] = true; 
    try1(1);
    cout<<MIN; 
}