#include <stdio.h> 
int main() 
{
    int a[7] = {1,3,5,7,9,10,1000}; 
    int b[7] = {1,3,7,8,10,11,12}; 
    int i=0; 
    int j=0; 
    int d=0; 
    while (j<=6) 
    {
        if (a[i]<=b[j]) i++; 
        if (a[i]>b[j]) 
        {
            printf("%i  ",i); 
            j++; 
            i--; 
        }
    }

}