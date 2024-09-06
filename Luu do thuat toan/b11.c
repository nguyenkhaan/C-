#include <stdio.h> 
#include "cs50.h" 
int main() 
{
    int n = get_int("Nhap nam : "); 
    if (n%400==0 || (n%4==0 && n%100!=0)) printf("Nam nhuan"); 
    else printf("Khong phai nam nhuan"); 
}