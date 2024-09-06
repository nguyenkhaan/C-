#include <stdio.h> 
#include <stdbool.h>
bool binarysearch(int a[], int l, int r, int x) 
{
    int mid = (l+r)/2; 
    if (a[mid]==x) return 1; 
    if (l>r) return false; 
    if (x<a[mid]) binarysearch(a,l,mid-1,x); 
    if (x>a[mid]) binarysearch(a,mid+1,r,x); 
}
int main() 
{
    int n; 
    int a[100]; 
    printf("Nhap n: "); scanf("%i",&n); 
    for (int i=0; i<=n-1; i++)
    {
        printf("%i. ",i); scanf("%i",&a[i]); 
    }
    printf("Nhap x: "); int x; scanf("%i",&x); 
    printf("%i ",binarysearch(a,0,n-1,x)); 
}