#include <stdio.h> 
#include <math.h> 
float a,b,c;
void area(double xa, double ya, double xb, double yb) //Thua toan lap phuong trinh duong thang 
{
    a = ya -yb; 
    b = xb - xa; 
    c = -(a*xa+b*ya); 
}
int main() 
{
    printf("Nhap toa do ba diem A,B,C: "); 
    float xa,ya,xb,yb,xc,yc; 
    scanf("%f %f %f %f %f %f",&xa,&ya,&xb,&yb,&c,&yc); 
    area(xa,ya,xb,yb); 
    printf("Nhap toa do diem M: "); 
    float x,y; 
    scanf("%f %f",&x,&y); 
    float t = a*x+b*y+c;
    if (t*(a*xc+b*yc+c)>0) printf("Tao thanh tam giac"); 
    else printf("Khong tao thanh tam giac"); 
}
