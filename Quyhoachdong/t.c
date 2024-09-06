//Cach 1: Dung mang 2 chieu
#include <stdio.h> 
int main() 
{
    int n; 
    printf("Nhap n: "); scanf("%i",&n); 
    int a[100];  
    for (int i=1; i<=n; i++) scanf("%i",&a[i]); 
    //Nhap bo so l va r 
    //int l[100]; int r[100]; 
    //for (int i=1; i<=n; i++) scanf("%i %i",l[i],r[i]); 
    int t[100][100]; 
    for (int i=1; i<=n; i++) 
    for (int j=1; j<=n; j++) 
    {
        if (i!=j) t[i][j] = 0; 
        else t[i][j] = a[i]; 
    }
    for (int i=1; i<=n; i++) 
    for (int j=i+1; j<=n; j++) t[i][j] = t[i][j-1]+a[j]; 
    int d=0; 
    for (int i=1; i<=n; i++) 
    for (int j=1; j<=n; j++) 
    {
        printf("%i  ",t[i][j]);  d++; 
        if (d==n) 
        {
            printf("\n"); 
            d=0; 
        }
    }

}