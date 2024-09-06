#include <stdio.h> 
#include <stdbool.h>
#define MAX 100 
int a[8] = {-1,-1,1,1,-2,-2,2,2}; 
int b[8] = {-2,2,2,-2,-1,1,-1,1}; 
bool t[MAX][MAX]; 
int x,y,u,v; 
int i,j; 
int m=0;
int d=0;
int X[MAX]; 
int Y[MAX];
bool check() 
{
    for (i=0; i<8; i++) 
    for (j=0; j<8; j++) if (t[i][j] == true) return false; 
    return true; 
}
void incauhinh() 
{
    printf("Yes");
}
void try(int x,int y) 
{
    d++; 
    t[x][y] = false; 
    for (j=0; j<8; j++) 
    {
        if (d==64) incauhinh(); 
        u = x+a[j]; 
        v = y+b[j]; 
        if ((u>=0) && (u<8) && (v>=0) && (v<8) && (t[u][v]==true)) try(u,v);   
    }
    d--; 
    t[x][y] = true; 
}
int main() 
{
    scanf("%i %i",&x,&y); 
    for (i=0; i<8; i++)
    for (j=0; j<8; j++) t[i][j] =true; 
    try(x,y); 
}