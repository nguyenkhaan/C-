#include <stdio.h> 
#include <math.h> 
int main() 
{
    int d=0; int n;  
    printf("Nhap so n: "); scanf("%i",&n); 
    for (int i=1; i<=(int)sqrt(n);i++) 
    {
        if (n%i==0) d++; 
    } //Chi can chay toi can n la dc roi 
    printf("%i",d*2); 
}