#include <stdlib.h> 
#include <stdio.h> 
int main() 
{
    FILE *f; 
    f = fopen("Bai_088.txt","r"); 
    int m; 
    int n; 
    for (int i=0; i<5; i++)
    {
        fscanf(f,"%i %i",&m,&n); 
        printf("%i %i \n",m,n); 
    } 
    fclose(f); 
    return 0; 
}