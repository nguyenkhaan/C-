#include <stdio.h> 
int main() 
{
    int a[6] = {2,4,2,3,4,8}; 
    int r = 5;
    int l = 0; 
    int t=0; 
    int i; 
    while (l<r) 
    {
        for (i=l; i<=r-1; i++) //Dua phan tu cao nhat ve phia right
        {
            if (a[i]>a[i+1]) 
            {
                t = a[i+1]; 
                a[i+1] = a[i]; 
                a[i] = t; 
            }
        }
        r--; 
        for (i=r; i>=l+1; i--) //Dua phan tu nho nhat ve phia left 
        {
            if (a[i]<a[i-1])
            {
                t = a[i-1]; 
                a[i-1] = a[i]; 
                a[i] = t; 
            }
        }
        l++; 
    }
    for (i=0; i<=5; i++) printf("%i ",a[i]); 
}