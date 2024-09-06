#include <bits/stdc++.h>
using namespace std; 
int ans; 
int num; 
int lai(int x) 
{
    return (15*x - 3 - x/2); 
}
void binarysearch(int l, int r, int val, int i)
{
    if (l<r) 
    {
        int mid = (l+r)/2; 
        if (val*mid>=1000) 
        {
            ans = mid; 
            num =i; 
            binarysearch(l,mid,val,i); 
        }
        else binarysearch(mid+1,r,val,i); 
    }
}
int main() 
{
    int val; 
    for (int i=1; i<=100; i++) 
    {
        val = lai(i); 
        binarysearch(1,1000,val,i); 
    }   
    cout<<"Can phai ban 1 ngay duoc "<<num<<" cai pizza va ban trong "<<ans<<" ngay "; 
}