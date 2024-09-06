#include <stdio.h> 
#define is_even(n) ((n%2==0)?1:0) 
int main() 
{
    int n; 
    printf("Nhap n: "); scanf("%i",&n); 
    int d = is_even(n); 
    if (d==1) printf("Chan"); 
    else printf("so le");
}