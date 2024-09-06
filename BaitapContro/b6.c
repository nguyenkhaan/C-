//Liet ke cac hoan vi 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 
#define MAX 200
int a[MAX]; 
bool t[MAX];
char s[MAX]; 
void incauhinh(int n)  
{
    for (int i=0; i<n; i++) 
    {
        int d = a[i]; 
        printf("%c",s[d]);
    }
    printf("\n"); 
}
void try(int i, int n) 
{
    for (int j=0; j<n; j++) if (t[j]) 
    {
        a[i] = j; 
        t[j] = false; 
        if (i==n-1) incauhinh(n);
        else try(i+1,n); 
        t[j] = true; 
    }
}
int main() 
{
    printf("Enter the string: "); fgets(s,sizeof(s),stdin); 
    int n = strlen(s)-1; 
    for (int i=0; i<MAX; i++) t[i] = true; 
    try(0,n); 
    
}