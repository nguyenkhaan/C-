#include <stdio.h> 
int main() 
{
    int a; 
    printf("Enter the first number: "); scanf("%i",&a); 
    int *A = &a; 
    int b; 
    printf("Enter the second number: "); scanf("%i",&b); 
    int *B = &b; 
    int sum = *A + *B; 
    printf("Sum: %i",sum); 
}