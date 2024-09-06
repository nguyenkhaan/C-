//Nhap vao tu so, mau so va in ra phan so do o dang toi gian 
#include <stdio.h> 
struct phanso{
    int ts; 
    int ms; 
};
typedef struct phanso phanso; 
phanso rut_gon(int a, int b) 
{
    phanso x; 
    int ucln; 
    for (int i=a; i>=1; i--) if ((a%i==0) && (b%i==0))
    {
        ucln = i; 
        break; 
    }
    x.ts = a/ucln; 
    x.ms = b/ucln; 
    return x; 
}
int main() 
{
    int a,b; 
    printf("Nhap a,b: "); scanf("%i %i",&a,&b); 
    phanso x = rut_gon(a,b); 
    printf("Phan so sau khi rut gon: %i %i",x.ts,x.ms); 
}