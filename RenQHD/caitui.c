#include <stdio.h> 
int max(int x, int y) 
{
    if (x>y) return x; 
    return y; 
}
int main() 
{
    int W;  int n; 
    printf("Nhap can nang: "); scanf("%i",&W); 
    printf("Nhap n: "); scanf("%i",&n); 
    int w[100]; int v[100]; 
    for (int i=1; i<=n; i++) scanf("%i %i",&w[i],&v[i]); 
    int f[100][100]; 
    for (int i=1; i<=W; i++) 
    for (int j=1; j<=W; j++)
    {
        f[0][i] = 0; 
        f[i][0] = 0; 
    }
    for (int i=1; i<=W; i++) 
    for (int j=1; j<=W; j++) 
    {
        if (w[i]>j) f[i][j] = f[i-1][j]; 
        else 
        {
            for (int h=0; h<=i-1; h++) f[i][j] = max(f[i][j],f[h][j-w[i]]+v[i]); 
        }
    }
    int d=0; 
    for (int i=0;i<=n; i++)
    for (int j=0; j<=W; j++) 
    {
        printf("%i  ",f[i][j]); d++; 
        if (d==W+1) 
        {
            printf("\n"); 
            d=0; 
        }
    }
}