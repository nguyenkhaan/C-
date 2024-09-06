#include <stdio.h> 
struct phanso 
{
    int ts; 
    int ms; 
};
typedef struct phanso phanso; 
phanso nhap() 
{
    phanso p; 
    printf("Nhap tu so, mau so:"); 
    scanf("%i %i",&p.ts,&p.ms); 
    return p; 
}
phanso tinh(phanso p, phanso q) 
{
    int a1 = p.ts; int b1 = p.ms; 
    int a2 = q.ts; int b2 = q.ms; 
    phanso x; 
    x.ts = a1*b2+a2*b1; 
    x.ms = b1*b2; 
    return x; 
}
phanso rutgon(phanso p) 
{
    int m = p.ts; 
    int n = p.ms; 
    int ucln; 
    for (int i=m; i>=1; i--) if (n%i==0 && m%i==0)
    {
        ucln = i; 
        break; 
    }
    p.ts/=ucln; 
    p.ms/=ucln; 
    return p; 
}
void in(phanso p) 
{
    printf("Sau rut gon: %i %i",p.ts,p.ms); 
}
int main() 
{
    phanso p = nhap(); 
    phanso q = nhap(); 
    phanso x = tinh(p,q); 
    x = rutgon(x); 
    in(x); 
}
