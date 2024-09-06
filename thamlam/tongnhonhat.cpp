#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
int main() 
{
    int n; 
    int a[100]; 
    printf("Nhap n: "); scanf("%i",&n);
    for (int i=1; i<=n; i++) 
    {
        printf("%i ",i); scanf("%i",&a[i]); 
    }
    //Sap xep lai cai mang da 
    int l=1; 
    int r=n; 
    while (l<r) 
    {
        for (int i=l; i<=r-1; i++) if (a[i]>a[i+1]) 
        {
            int t=a[i]; a[i] = a[i+1]; a[i+1]=t; 
        }
        r--; 
        for (int i=r; i>=l+1; i--) if (a[i]<a[i-1]) 
        {
            int t=a[i]; a[i] = a[i-1]; a[i-1]=t; 
        }
        l++; 
    }
    char A[10]=""; //Luu so thu nhat
    char B[10]=""; //Luu so thu hai 
    int h=0; int k=0; 
    for (int i=1; i<=n; i++) 
    {
        if  (atoi(A)<=atoi(B)) A[h++] = a[i]+'0'; 
        else B[k++] = a[i]+'0'; 
    }
  //  printf("%s  %s",A,B); 
    printf("%i",atoi(A)+atoi(B)); 
    strcmp()

}