#include <stdio.h> 
int main() 
{
    int a[6] = {1,3,5,7,10,12}; 
    int b[5] = {2,6,7,8,9}; 
    int c[100]; 
    int k=0; 
    int i=0; 
    int j=0; 
    int n1 = sizeof(a)/sizeof(a[0])-1; 
    int n2 = sizeof(b)/sizeof(b[0])-1; 
    while (i<=n1 && j<=n2) {
        c[k++] = (a[i]<=b[j])?a[i++]:b[j++]; 
    }
    while (i<=n1) c[k++] = a[i++]; 
    while (j<=n2) c[k++] = b[j++]; 
    for (i=0; i<=k-1; i++) printf("%i ",c[i]); 

}