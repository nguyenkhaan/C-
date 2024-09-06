//In day con nho nhat co tong phan tu nho hon hoac bang S 
#include <stdio.h> 
int main() 
{
    int n;
    printf("Nhap n: "); scanf("%i",&n); 
    int s; int S=0; 
    printf("Nhap s: "); scanf("%i",&s);
    int a[100]; 
    for (int i=0; i<=n-1; i++) 
    {
        printf("%i ",i); scanf("%i",&a[i]); 
        S+=a[i]; 
    }
    int i=0;
    int j=n-1; 
    while (i<j) 
    {
        if (S>s) 
        {
            if (a[i]>=a[j]) 
            {
                S-=a[i]; 
                i++; 
            }
            else 
            {
                S-=a[j]; 
                j--; 
            }
        }
        if (S<=s) break; 
    }
    if (i>=j) printf("-1"); 
    else printf("%i",j-i+1); 
}