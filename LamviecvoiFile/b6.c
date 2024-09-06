#include <stdio.h> 
#include <stdlib.h> 
#define input "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Tep_tin\\o3.txt"
int main() 
{
    FILE *f; 
    f = fopen(input,"r"); 
    char s[200]; 
    int a[100]; 
    int b[100]; 
    int i = 0;  
    while (fscanf(f,"%d %d",&a[i],&b[i])==2)
    {
        i++; 
    }
    fclose(f); 
    for (int j=0; j<i; j++) printf("%i  ",b[j]); 

}