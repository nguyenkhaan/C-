//Doc ma tran mxn 
#include <stdio.h> 
#include <stdlib.h> 
#define input "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Baitapvefile\\o5.txt"
#define MAX 100
int main() 
{
    FILE *f; 
    f = fopen(input,"r"); 
    int m,n; 
    fscanf(f,"%d %d",&m,&n);  //m dong n cot 
    int l[MAX][MAX]; 
    int i=0; 
    int j=0; 
    while (fscanf(f,"%d",&l[i][j])==1)
    {
        j++; 
        if (j==n) 
        {
            i++; 
            j=0; 
        }
    }  
    i=0; j=0; 
    for (i=0; i<m; i++) 
    for (j=0; j<n; j++) 
    {
        printf("%d  ",l[i][j]); 
        if (j==n-1) 
        {
            printf("\n"); 
        }
    }
    fclose(f); 
    return 0; 
}