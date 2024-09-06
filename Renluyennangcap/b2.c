#include <stdio.h> 
#define minmax(a,b) ((a)>(b)?(a):(b)) 
int main() 
{
    printf("Nhap a,b: "); int a; int b;  
    scanf("%i %i",&a,&b); 
    printf("%d",minmax(a,b)); 
}