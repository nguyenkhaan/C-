#include <stdio.h> 
#include <stdlib.h> 
#define input "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Tep_tin\\o4.txt"
int main() 
{
    FILE *f; 
    f = fopen(input,"r"); 
    int l[100][100]; 
    int m; 
    int n; 
    fscanf(f,"%d %d",&m,&n); 
    
    fclose(f); 
    
}