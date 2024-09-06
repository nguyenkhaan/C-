#include <stdio.h> 
#include <stdbool.h> 
#include <math.h> 
int a[10]; 
bool t[10]; 
bool check(int a, int b, int c, int d)
{
    if (fabs((a-b)) == fabs((c-d))) return false; 
    return true; 
}
void incauhinh()
{
    int f=0; 
    for (int i=1; i<=8; i++)
    {
        for (int m=i+1; m<=8; m++) if (check(i,m,a[i],a[m]) == false)
        {
            f++; 
            break; 
        }
        if (f!=0) break; 
    }
    if (f==0)
    {
        for (int i=1; i<=8; i++) printf("%i ",a[i]); 
        printf("\n"); 
    }
}
void try(int i) 
{
    for (int j=1; j<=8; j++) if (t[j])
    {
        a[i] = j; 
        t[j] = false; 
        if (i==8) incauhinh(); 
        else try(i+1);  
        t[j] = true; 
    }
}
int main()
{
    for (int i=1; i<=10; i++) t[i]=true; 
    try(1); 

}