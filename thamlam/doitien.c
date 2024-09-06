//Cho cac to tien menh gia 1 2 5 20 50 100 200 500 1000 
//Tinh so to tien it nhat can doi 
#include <stdio.h> 
int main() 
{
    int n; 
    printf("Nhap n: "); scanf("%i",&n); 
    int a[11] = {0,1,2,5,10,20,50,100,200,500,1000}; 
    int d=0; 
    int i=10; 
    while (n>0) 
    {
        while (n-a[i]>=0) 
        {
            n-=a[i]; 
            d++; 
        }
        i--; 
    }
    printf("%i",d);
}