//Bai toan day con tang dai nhat 
#include <stdio.h> 
int max(int x, int y) 
{
    if (x>y) return x; 
    return y; 
}
int main() 
{
    int a[100]; 
    printf("Nhap n: "); int n; scanf("%i",&n); 
    for (int i=1; i<=n; i++) 
    {
        printf("%i ",i); scanf("%i",&a[i]); 
    }
    int f[100]; f[1] = 1; 
    for (int i=2; i<=n; i++) f[i] = 0; 
    for (int i=1; i<=n; i++) 
    {
        for (int j=1; j<=i; j++) if (a[j]<a[i]) 
        {
            f[i] = max(f[i],f[j]+1); 
        }
    }
    for (int i=1; i<=n; i++) printf("%i  ",f[i]); 
}