#include <stdio.h> 
#include <math.h> 
#include <stdbool.h> 
bool check(int n) 
{
    for (int i=2; i<=(int)sqrt(n);i++)
    {
        if (n%i==0) return false; 
    }
    return true; 
}
int main() 
{
    int n;
    printf("Nhap so nguyen: "); scanf("%i",&n); 
    if (check(n)==true) printf("so nguyen to"); 
    else printf("khong phai so nguyen to"); 
}