#include <stdio.h> 
#include <math.h> 
int main() 
{
    double a,b,c; 
    printf("Nhap a,b,c: "); scanf("%lf %lf %lf",&a,&b,&c); 
    if (a==0) 
    {
        if ((b==0) && (c!=0)) printf("Phuong trinh vo nghiem"); 
        if ((b==0) && (c==0)) printf("Vo so nghiem"); 
        double x = -c/b;
        printf("%g",x); 
    }
    else
    {
        double d = b*b-4*a*c; 
        if (d<0) 
        {
            printf("Phuong trinh co nghiem phuc: \n");
            double r = -b/(2*a); 
            double i = sqrt(-d)/(2*a); 
            printf("Hai nghiem phuc: %lf + %lfi va %lf - %lfi",r,i,r,i); 
        }
        if (d>=0) 
        {
            double x1 = (-b-sqrt(d))/(2*a); 
            double x2 = (-b+sqrt(d))/(2*a); 
            printf("Phuong trinh co 2 nghiem %.2lf va %.2lf",x1,x2); 
        }
    }
}