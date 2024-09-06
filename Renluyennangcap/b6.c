//Viet mactokiem tra gia tri lon hon 
#include <stdio.h> 
#define who_is_bigger(a,b,d) do \
{ \
    if (a>b) d=1; \
    if (a<b) d=2; \
} while(0) 
int main() 
{
    int a; 
    int b; 
    printf("Nhap a,b: "); scanf("%i %i",&a,&b); 
    int d=0; 
    who_is_bigger(a,b,d); 
    switch (d)
    {
    case 1: printf("a lon hon"); break;
    case 2: printf("b lon hon"); break;
    
    default: printf("bang nhau"); 
        break;
    }
}