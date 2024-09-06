//Sinh chuoi nhi phan co do dai n 
#include <stdio.h> 
int a[10];
int n;  
void incauhinh(int m)
{
    for (int i=1; i<=m; i++) printf("%i ",a[i]);
    printf("\n"); 
}
void try(int i) 
{
    for (int j=0; j<=1; j++)
    {
        a[i] = j; 
        if (i==n) incauhinh(n);
        else try(i+1); 
    }
}
int main() 
{
    n=3; 
    try(1); 
}