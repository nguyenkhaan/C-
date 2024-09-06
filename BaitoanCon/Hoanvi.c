//Bai toan liet ke hoan vi 
#include <stdio.h> 
#include <stdbool.h>
int n; 
int a[100]; 
int t[100]; 
void incauhinh() 
{
    for (int i=1; i<=n; i++) printf("%i ",a[i]); 
    printf("\n"); 
}
void try(int i) 
{
    for (int j=1; j<=n; j++) if (t[j])
    {
        a[i] = j; 
        t[j] = false;
        if (i<n) try(i+1); 
        else incauhinh(); 
        t[j] = true; 
    }
}
int main()
{
    n=5;
    for (int i=1; i<=n; i++) t[i] = true; 
    try(1); 
}