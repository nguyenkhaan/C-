#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
#include <algorithm>
int max(int x, int y) 
{
    return (x>=y)?x:y; 
}
int min(int x, int y) 
{
    return (x<=y)?x:y; 
}
int main() 
{
    char s1[100]=""; 
    char s2[100]=""; 
    printf("Nhap s1: "); scanf("%s",&s1); 
    printf("Nhap s2: "); scanf("%s",&s2); 
    int l = strlen(s1); 
    int r = strlen(s2); 
    int f[100][100]; 
    int m = max(l,r); 
    for (int i=0; i<=m; i++) 
    {
        f[0][i] = 0; 
        f[i][0] = 0; 
    }
    int t,x,c; 
    for (int i=1; i<=l-1;i++)
    for (int j=1; j<=r-1; j++) 
    {
        t = f[i][j-1]; 
        x = f[i-1][j]; 
        c = f[i-1][j-1]; 
        if (s1[i]==s2[j]) f[i][j] = min(min(t,x),c); 
        else f[i][j] = min(min(t,x),c)+1; 
    }
    int d=0;
    for (int i=0; i<=l-1; i++) 
    for (int j=0; j<=r-1; j++) 
    {
        printf("%i ",f[i][j]); 
        d++; 
        if (d==r) 
        {
            printf("\n"); 
            d=0; 
        }
    }
    
}