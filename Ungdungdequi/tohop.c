#include <stdio.h> 
#include <stdbool.h>
int a[1000]; 
bool t[1000]; 
void incauhinh(int k) 
{
    for (int i=1; i<=k; i++) printf("%i ",a[i]); 
    printf("\n");
}
void try(int i, int k, int n) 
{
    for (int j=1; j<=n-k+i; j++) if (t[j]) 
    {
        a[i] = j; 
        t[j] = false; 
        if (i==k) incauhinh(k); 
        else try(i+1,3,5); 
        t[j] =true; 
    }
}
int main() 
{
    int k=3; 
    int n=5; 
    int len = sizeof(t)/sizeof(t[0]); 
    for (int i=0; i<=len; i++) t[i] = true; 
    try(1,3,5); 
}