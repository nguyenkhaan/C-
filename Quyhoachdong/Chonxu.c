//Bai chon xu
#include <stdio.h> 
#include <math.h> 
#include <stdbool.h>
int main() 
{
    int n; int m=0; 
    printf("Nhap n: "); scanf("%i",&n); 
    int s; 
    printf("Nhap s: "); scanf("%i",&s); 
    int a[100]; 
    for (int i=1; i<=n; i++) scanf("%i",&a[i]); 
    bool t[100][100]; 
    for (int i=0; i<=s; i++)
    {
        t[0][i] = 0; 
        t[i][0] = 0; 
    }
    for (int i=1; i<=n; i++) 
    for (int j=1; j<=s; j++) 
    {
        if (a[i]>j) t[i][j] = 0; 
        else if (a[i]==j) t[i][j]=1; 
        else
        {
            for (int h=0; h<=i; h++) if (t[h][j-a[i]]==true)
            {
                t[i][j] = true; 
                if (j==s) m++;  
            }
        }
    }
    int d=0; 
    printf("%i",m); 
}