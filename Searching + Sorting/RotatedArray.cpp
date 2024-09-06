#include <stdio.h> 
#include <iostream>
using namespace std; 
int pos; 
int a[9] = {7,8,9,1,2,3,4,5,6};
int n = 8;
int Check = 0; 
int x = 5; 
void timPos(int l, int r) 
{
    if (l<=r) 
    {
        auto vi_tri = [&]()
        {
            int mid = (l+r)/2; 
            if (a[mid]>a[n])
            {
                pos = mid; 
                timPos(mid+1,r); 
            }
            else timPos(l,mid-1); 
        };
        auto tim_so = [&]()
        {
            int mid = (l+r)/2; 
            if (a[mid] == x) 
            {
                cout<<mid; 
                return; 
            }
            if (a[mid]>x) timPos(l,mid-1); 
            if (a[mid]<x) timPos(mid+1,r); 
        };
        if (Check == 0) vi_tri(); 
        else tim_so();  
    }
}
int main() 
{
    
    int n = 8; 
    timPos(0,n); 
    Check++; 
    timPos(0,pos); 
    timPos(pos+1,n); 



}