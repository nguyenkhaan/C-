#include <stdio.h> 
#include <string.h> 
int max(int x, int y) 
{
    if (x>y) return x; 
    return y; 
}
int main() 
{
    char s1[100]; 
    char s2[100]; 
    printf("Nhap s1: "); scanf("%s",&s1); 
    printf("Nhap s2: "); scanf("%s",&s2);  
    int f[300][300]; 
    for (int i=0; i<=strlen(s1)+strlen(s2);i++) 
    {
        f[0][i] = 0; 
        f[i][0] = 0; 
    }
    //s1 = "0"+s1; 
    //
    for (int i=1; i<=strlen(s1)-1;i++) 
    for (int j=1; j<=strlen(s2)-1; j++) 
    {
        if (s1[i]==s2[j]) 
        {
            f[i][j] = max(f[i-1][j],f[i][j-1])+1; 
        }
        else f[i][j] = max(f[i-1][j],f[i][j-1]);
    }
    int d=0; 
    for (int i=0; i<=strlen(s1)-1;i++) 
    for (int j=0; j<=strlen(s2)-1;j++) 
    {
        printf("%i  ",f[i][j]);  d++; 
        if (d==strlen(s2)) 
        {
            printf("\n"); 
            d=0; 
        }
    }
}