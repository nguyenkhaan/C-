#include <stdio.h> 
#include <iostream>
using namespace std; 
int t[1000]; 
int sum = 0; 
int sum2 = -INT_MAX; 
int a[9] = {0,1,2,3,4,5,6,7,8}; 
void build(int id, int l, int r) 
{
    if (l==r) 
    {
        sum+=t[id]; 
        if (sum2<sum) sum2 = sum; 
        if (sum<0) sum = 0; 
        return; 
    }
    int mid = (l+r)/2; 
    build(l,mid); 
    build(mid+1,r); 
}
int main() 
{

}