#include <stdio.h> 
#include <stdbool.h> 
#include <math.h> 
int min(int x, int y) 
{
    return 1/2*(x+y-fabs(x-y)); 
}
int main() 
{
    int n; int a[10002]; bool t[10002]; int s=0,d=0,j=0; 
    a[n] = 0; t[n-1]=true; t[-1]=false; 
    printf("Nhap n: "); scanf("%i",&n); 
    for (int i=0; i<=n-1; i++) 
    {
        printf("Nhap so %i: ",i); scanf("%i",&a[i]); 
        t[i] = true; 
    }
    for (int i=1; i<=n-1; i++) 
    {
        if (a[i-1]>a[i] && a[i+1]>a[i])
        {
            d = min(fabs(a[i-1]-a[i]),fabs(a[i+1]-a[i])); 
            s+=d; 
            a[i] +=d; 
            t[i] = false; 
            if (a[i-1]>a[i+1]) t[i+1]=false;
            else if (a[i-1]<a[i+1]) t[i-1]=false;  
            else {t[i-1]=false; t[i+1]=false; }
        }
    }     
    for (int i=n-1; i>=0; i--) if (t[i])
    {
        int c=0; 
        for (j=i-1; j>=0; j--) 
        {
            if (t[j] && a[j-1]<a[j]) break; 
            c -= a[j]; 
        }
        int h=(i-j-1)*min(a[i],a[j]) + c;
        if (h>0) s+=h; 
    }
         printf("%i\n",s); 
}