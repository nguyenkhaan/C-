#include <stdio.h> 
#include <math.h> 
#include "cs50.h" 
int main()
{
    float xa,ya,xb,yb; 
    printf("Nhap toa do diem A: "); scanf("%f %f",&xa,&ya); 
    printf("Nhap toa do diem B: "); scanf("%f %f",&xb,&yb); 
    double l = sqrt(pow(xa-xb,2)+pow(yb-ya,2)); 
    printf("%g",l); 
}