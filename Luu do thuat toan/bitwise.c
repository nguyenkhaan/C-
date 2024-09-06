#include <stdio.h> 
#include <stdbool.h>
#include <math.h> 
bool bit(int x, int y) 
{
    return (int)(x==1||y==1); 
}
int main() 
{
    int a; 
    int b; 
    int s=0; 
    printf("Nhap a,b: "); scanf("%i %i",&a,&b); 
    int m; int n; 
    int A[1000]; int k=0; 
    while (1==1) 
    {
        m = a%2; 
        n = b%2; 
        A[k++] = bit(m,n); 
        if ((a==0) && (b==0)) break; 
        a = a/2; 
        b = b/2; 
    }
    for (int i=k-1; i>=0; i--) s+=pow(2,i)*A[i]; 
    printf("%i",(int)s); 
}
int main() 
{
    
}