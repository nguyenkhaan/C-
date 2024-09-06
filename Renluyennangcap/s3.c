#include <stdio.h> 
struct phanso{
    int ms; 
    int ts; 
}; 
typedef struct phanso phanso; 
phanso nhap(phanso p)
{
    printf("Nhap tu so va mau so: "); 
    scanf("%i %i",&p.ts,&p.ms); 
    return p; 
}
phanso rutgon(phanso p) 
{
    int m = p.ts; 
    int n = p.ms; 
    int ucln; 
    for (int i=n; i>=1; i--) if (n%i==0 && m%i==0)
    {
        ucln= i; 
        break; 
    }
    p.ts/=ucln; 
    p.ms/=ucln; 
    return p; 
}
void in(phanso p) 
{
    printf("Phan so sau khi rut gon: %i %i",p.ts,p.ms); 
}
int main()
{
    phanso p; 
    p=nhap(p); 
    p=rutgon(p); 
    in(p); 
}