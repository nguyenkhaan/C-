#include <stdio.h> 
#include <stdbool.h> 
#include <math.h> 
int a[100]; 
bool t[100]; 
void incauhinh() 
{
    bool d= true; 
    for (int i=1; i<=8; i++) 
    {
        for (int j=i+1; j<=8; j++) if (fabs(a[i]-a[j])==fabs(i-j)) 
        {
            d = false; 
            break;    
        }
        if (d==false) break; 
    }
    if (d==true) 
    {
        for (int i=1; i<=8; i++) printf("%i ",a[i]); 
        printf("\n"); 
    }
}
void Try(int i)
{
    for (int j=1; j<=8; j++) if (t[j])
    {
        a[i] = j; 
        t[j]  =false; 
        if (i==8) incauhinh(); 
        else Try(i+1); 
        t[j] = true; 
    }
}
int main() 
{
    int length = sizeof(t)/sizeof(t[0]); 
    for (int i=0; i<=length; i++) t[i] =true; 
    Try(1); 

}