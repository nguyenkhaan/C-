#include <stdio.h> 
#define max(a,b) (a>b)?a:b 
int main() 
{
    int a; 
    printf("Enter the first number: "); scanf("%i",&a); 
    int *A = &a; 
    int b; 
    printf("Enter the second number: "); scanf("%i",&b); 
    int *B = &b; 
    printf("%i",max(*A,*B));

}