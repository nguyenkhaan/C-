#include <stdio.h> 
#define dientich(a,b) (a*b) 
int main() 
{
    float a; 
    float b; 
    printf("Nhap a,b: "); scanf("%f %f",&a,&b); 
    printf("%g",dientich(a,b)); 
}