#include <stdio.h> 
#define MAX 100
int a[4] = {1,0,-1,0};
int b[4] = {0,1,0,-1}; 
int x,y,j,u,v;  
int n = 5; 
int d = 0; 
int dem = 0; 
int max = 0; 
int T[5][5] =
{
    {0,0,0,0,1}, //Vi tri dong so 0
    {1,1,0,0,0},
    {0,1,1,0,0},
    {0,0,0,0,0},
    {1,0,0,0,0}  //Vi tri dong so 4
};
int A[MAX][MAX];  
int L[MAX][MAX]; 
void incauhinh(int m)
{
    for (int i=0; i<n; i++) 
    {
        for (int k=0; k<n; k++) printf("%d ",A[i][k]); 
        printf("\n"); 
    }
}
void try(int x, int y) 
{
    d++; 
    A[x][y] = d; 
    for (j=0; j<4; j++)
    {
        if (d==n*n) incauhinh(A[x][y]); 
        u =x+a[j]; 
        v =y+b[j]; 
        if (u>=0 && u<n && v>=0 && v<n) try(u,v); 
    }
    d--; 
    A[x][y] = 0; 
}
int main() 
{
    scanf("%d %d",&x,&y); 
    for (int i=0; i<n; i++) 
    for (int k=0; k<n; k++) A[i][k] = 0; 
    try(x,y); 
}

