#include <stdio.h> 
#include <iostream> 
#include <stdlib.h>
#include <limits.h> 
#define input "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Codeforces\\matrix_stablizatio.txt"
#define output "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Codeforces\\matrix_stablizatio_out.txt"
#define MAX1 10000
#define max(m,n) ((m>=n)?m:n)
using namespace std; 
int a[MAX1][MAX1]; 
void nhap(int *c, int *r) 
{
    FILE *f; 
    f = fopen(input,"r"); 
    fscanf(f,"%d %d",r,c); 
    int i = 1; 
    int j = 1; 
    while (fscanf(f,"%d",&a[i][j])==1)
    {
        j++; 
        if (j == *c +1) 
        {
            j = 1; 
            i++; 
        }
    }
    fclose(f); 
}
void solve(int c, int r) 
{
    for (int i=1; i<=r; i++) a[i][0] = 0; 
    for (int j=1; j<=c; j++) a[0][j] = 0; 
    int MAX = 0; 
    for (int i=1; i<=r; i++) 
    {
        for (int j=1; j<=c; j++) if (a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j+1] && a[i][j]>a[i][j-1])
        {
            MAX = max(MAX,a[i-1][j]); 
            MAX = max(MAX,a[i+1][j]); 
            MAX = max(MAX,a[i][j+1]); 
            MAX = max(MAX,a[i][j-1]); 
            a[i][j] = MAX; 
        }
        
    }
}
int main() 
{
    int c,r; //column va row 
    nhap(&c,&r); 
    solve(c,r);
    for (int i=1; i<=r; i++) 
    {
        for (int j=1; j<=c; j++) cout<<a[i][j]<<" "; 
        cout<<endl; 
    }
    return 0; 
}