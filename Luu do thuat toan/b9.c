#include <stdio.h> 
struct hoandoi 
{
    /* data */
    int m; 
    int n; 
};
struct hoandoi swap(int a, int b) 
{
    struct hoandoi A; 
    int t=a; 
    a=b; //274 
    b=t; 
    A.m=a; A.n=b; return A; 
}
int main() 
{
    struct hoandoi A; 
    int a,b,c; 
    printf("Nhap ba so a,b,c: "); scanf("%i %i %i",&a,&b,&c); 
    if (a>b)
    {
        A = swap(a,b); 
        a=A.m; 
        b=A.n; 
    }
    if (a>c) 
    {
        A = swap(a,c);  
        //Struc phai bang cai nay vi day la 1 mang tra ve gia tri cua 1 Struct 
        //chu khong phai la 1 thanh phan cua Struct 
        a=A.m; 
        c=A.n; 
    }
    if (b>c) 
    {
        A = swap(b,c); 
        b=A.m; 
        c=A.n; 
    } 
    printf("%i %i %i",a,b,c); 
}
