#include <stdio.h> 
#include <math.h> 
struct toado{
    int x; 
    int y; 
};
typedef struct toado toado; 
toado nhap() 
{
    toado x; 
    float a; 
    float b; 
    printf("Nhap toa do diem: "); scanf("%f %f",&a,&b); 
    x.x = a; x.y = b; 
    return x; 
}
float khoang_cach(toado a, toado b) 
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)); 
}
int main() 
{
    toado a = nhap(); 
    toado b = nhap(); 
    printf("%.3f",khoang_cach(a,b)); 
}