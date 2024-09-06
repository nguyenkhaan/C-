#include <stdio.h> 
#include <iostream>
using namespace std; 
int a[9] = {0,1,4,3,5,7,9,6,8}; 
int n = 8;
void merge(int l, int mid, int r) 
{
    int L[1000]; 
    int R[1000]; 
    int n1 = 0; 
    int n2 = 0; 
    for (int i=l;i<=mid; i++)
    {
        n1++; 
        L[n1] = a[i]; //n1 la so phan tu 
    }
    for (int i=mid+1; i<=r; i++) 
    {
        n2++; 
        R[n2] = a[i]; 
    }
    int result[1000]; 
    int k = 1;  int i = 1;  int j = 1; 
    while (i<=n1 && j<=n2) 
    { 
        if (L[i]<=R[i]) 
        {
            result[k] = L[i]; 
            k++; 
            i++; 
        }
        else 
        {
            result[k] = R[j]; 
            k++; 
            j++; 
        }
    } 
    while (i<=n1) result[k++] = L[i++]; 
    while (j<=n2) result[k++] = R[j++]; 
    for (int h=l; h<=r; h++) 
    {
        a[h] = result[k]; 
        k++; 
    } 
}
void sort(int l, int r) 
{
    if (l==r) 
    {
        return; 
    }
    int mid = (l+r)/2; 
    sort(l,mid); 
    sort(mid+1,r);
    merge(l,mid,r);  
}
int main()
{
    sort(1,n); 
    for (int i=1; i<=n; i++) cout<<a[i]<<"  "; 
}