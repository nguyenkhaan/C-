/*
Ý tưởng thuật toán: giống với thuật toán bình phương nhanh nhưng thay dấu * thành dấu + 

*/
#include <bits/stdc++.h>
using namespace std; 
int mulP(int a, int b) 
{
    int res = 0; 
    while (b) 
    {
        if (b & 1) res += a; 
        a += a; 
        b /=2; 
    }
    return res; 
}
int main() 
{
    cout<<mulP(7,10); 
}