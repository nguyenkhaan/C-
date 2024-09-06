//Bai toan fibonacci 
#include <stdio.h> 
int a[100]; 
void fibon(int n) 
{
    if ((n==1) || (n==2))
    {
        a[1] = 1; 
        a[2] = 1; 
    }
    else 
    {
        fibon(n-1); 
         a[n] = a[n-1] + a[n-2]; //Quy hoach dong ket hop de quy ne 
         //Ta tien hanh luu vao 1 mang, sau do dung de quy nhu 1 vong lap 
    }
    
}
int main() 
{
    int n; 
    printf("Nhap n: "); scanf("%i",&n); 
    fibon(n); 
    for (int i=1; i<=n; i++) printf("%i ",a[i]); 
}