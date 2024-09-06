#include <stdio.h> 
#define cong(a,b) (a+b) 
#define tru(a,b) (a-b) 
#define nhan(a,b) (a*b) 
#define chia(a,b) (a/b) 
int main() 
{
    float a; 
    float b; 
    printf("Nhap a,b: "); scanf("%f %f",&a,&b); 
    printf("%.2f \n%.2f \n%.2f \n%g",cong(a,b),tru(a,b),nhan(a,b),chia(a,b)); 
}