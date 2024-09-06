#include <stdio.h>
#include <iostream>
using namespace std; 
#define MAX 100
int X[8] = {1,2,2,1,-1,-2,-2,-1}; 
int Y[8] = {2,1,-1,-2,-2,-1,1,2}
int n = 8; 
int dem = 0; 
int A[MAX][MAX]; 
void dichuyen(int x, int y)
{
    dem++; 
    if (A[x][y] ==0) A[x][y] = dem; //Cap nhat gia tri dem neu chua di qua 
    for (int i=0; i<8; i++) 
    {
        if (dem == n*n) 
        {
            incauhinh(); 
            exit(); 
        }
        int u = x + X[i]; 
        int v = y + Y[i]; 
        if (u>=0 && u<n && v>=0 && v<n && A[u][v] ==0) dichuyen(u,v); 
    }
    dem--; 
    A[x][y] = 0; 
}
int main() 
{
    int x,y; 
    cin>>x>>y; 
    for (int i=0; i<MAX; i++) 
    {
        for (int j=0; j<MAX; j++) A[i][j] = 0; 
    }
}