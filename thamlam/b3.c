#include <stdio.h> 
#define MOD 100000007; 
int a[1000];
void merge(int a[], int l, int m, int r) 
{
    int n1 = m-l; 
    int n2 = r-(m+1); 
    int L[100]; 
    int R[100]; 
    int i; 
    int j; 
    int k=l; 
    for (i=0; i<=n1; i++) L[i] = a[k+i]; 
    for (j=0; j<=n2; j++) R[j] = a[m+1+j]; 
    i=0; j=0; 
    while (i<=n1&&j<=n2) 
    {
        a[k++] = (L[i]<=R[j])?L[i++]:R[j++]; 
    }
    while (i<=n1) a[k++]=L[i++]; 
    while (j<=n2) a[k++]=R[j++]; 

}
void sort(int a[], int l, int r) 
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
    int n;
    printf("Nhap n: "); scanf("%i",&n); 
    for (int i=0; i<=n-1; i++) 
    {
        printf("%i ",i); scanf("%i",&a[i]); 
    }
    sort(a,0,n-1); 
    int max; 
    for (int i=0; i<=n-1; i++) 
    {
        max+=(a[i]*i)%MOD; 
    }
    printf("%i  ",max); 
    
}