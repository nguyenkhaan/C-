#include <stdio.h> 
int n; 
int s=0; 
int a[100]; 
int d=0;
void incauhinh(int m) 
{
    int s1=0;
    for (int i=1; i<=m; i++) s1+=a[i];
    if (s1==n)
    {
        for (int i=1; i<=m; i++) printf("%i ",a[i]);
        printf("\n");
    }
}
void try(int i) 
{
    for (int j=1; j<=n;j++) if (s+j<=n) 
    {
        s+=j; 
        d++; a[d] = j; 
        if (s==n) incauhinh(d); 
        else try(i+1); 
        s-=j; 
        d-=1; 
    }
}
int main() 
{
    n=6; 
    try(0); 
}