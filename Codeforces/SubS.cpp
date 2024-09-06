#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int A[100][100]; 
    int s; 
    int n; 
    cin>>n>>s; 
    int a[1000]; 
    for (int i=1; i<=n; i++) cin>>a[i]; 
    //Dat hang 
    for (int i=1; i<=s; i++) A[0][i] = 0; 
    for (int i=1; i<=n; i++) 
    {
        if (a[i] == 0) A[i][0] = 1; 
        else A[i][0] = 0; 
    }
    A[0][0] = 1; 
    for (int i=1; i<=n; i++) //Bieu thi cho a[i]
    {
        for (int j=1; j<=s; j++) 
        {
            if (a[i] <= j && A[i-1][j-a[i]] == 1) A[i][j] = 1;
            else A[i][j] = 0; 
        }
    }

}