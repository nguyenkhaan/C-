#include <stdio.h> 
int max(int x, int y) 
{
    if x>y return x; 
    return y; 
}
int main() 
{
    int n; 
    printf("Nhap n: "); scanf("%i",&n); 
    int a[100]; int b[1000]; 
    int i; 
    for (i=1; i<=n; i++) 
    {
        printf("%i ",i); scanf("%i %i",&a[i],&b[i]); 
    }
    //Sap xep lai theo thoi gian 
    int l=1; 
    int r = n; 
    int t=0; 
    while (l<r) 
    {
        for (i=l; i<=r-1; i++) if (a[i]>a[i+1]) 
        {
            t = a[i]; a[i] = a[i+1]; a[i+1]=t; 
            t = b[i]; b[i] = b[i+1]; b[i+1]=t; 
        }
        r--; 
        for (i=r; i>=l+1; i--) if (a[i]>a[i-1]) 
        {
            t = a[i]; a[i] = a[i-1]; a[i-1]=t; 
            t = b[i]; b[i] = b[i-1]; b[i-1]=t; 
        }
        l++; 
    }
    int t[100]; 
    t[1] = 1;  
    for (i=2; i<=n; i++) 
    {
        for (int j=1; j<=i-1; j++) if (b[j]<a[i]) d = max(d,t[j]); 
        if (d!=0) t[i] = d++; 
        else t[i] = t[i-1]; 
        d=0; 
    }

}