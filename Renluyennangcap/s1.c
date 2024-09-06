//Viet chuong trinh return lai 2 bien (tim gia tri lon nhat va gia tri nho nhat cua hai so) 
#include <stdio.h> 
struct minmax{
    int A; 
    int B; 
}; 
typedef struct minmax minmax; 
minmax Tim_min_max(int a, int b)
{
    minmax x; 
    //Tim so lon nhat 
    if (a>=b) 
    {
        x.A=a; 
        x.B=b; 
    }
    else 
    {
        x.A=b; 
        x.B=a; 
    }
    return x; 
}
int main() 
{
    int a; 
    int b; 
    printf("Nhap a,b: "); scanf("%i %i",&a,&b);
    minmax x = Tim_min_max(a,b); 
    printf("So lon nhat: %i  So nho nhat: %i  ",x.A,x.B); 
}