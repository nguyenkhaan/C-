#include <stdio.h> 
int a[6] = {1,2,4,2,3,6}; 
void merge(int a[],int l, int m, int r)
{
    int n1 = m - l; 
    int n2 = r-(m+1); 
    int k = l; 
    int L[n1]; 
    int R[n2]; 
    int i; 
    int j; 
    for (i=0; i<=n1; i++) L[i] = a[l+i]; 
    for (j=0; j<=n2; j++) R[j] = a[m+1+j]; 
    i=0; 
    j=0; 
    while (i<=n1 && j<=n2) 
    {
        a[k++] = (L[i]<=R[j])?L[i++]:R[j++]; 
    }
    while (i<=n1) a[k++] = L[i++]; 
    while (j<=n2) a[k++] = R[j++]; 
}
void sort(int a[],int l, int r) 
{
    if (l<r)
    {
        int m = (l+r)/2; 
        sort(a,l,m); 
        sort(a,m+1,r); 
        merge(a,l,m,r);  
    }
}
int main()
{
    sort(a,0,5); 
    for (int i=0; i<=5; i++) printf("%i ",a[i]); 
}