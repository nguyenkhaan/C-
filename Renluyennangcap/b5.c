#include <stdio.h> 
#include <math.h>
#define check(n,d) do{   \
    d=0; \
    for (int i=3; i<=(int)sqrt(n);i++) if (n%i==0)\
    {\
        d++;\
        break; \
    }\
} while(0) 
int main() 
{
    int n; 
    printf("Nhap n: "); scanf("%i",&n); 
    int d=0; 
    check(n,d); 
    if (d==0) printf("Nguyen to"); 
    else printf("Dell");

}