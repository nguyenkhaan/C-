#include <stdio.h> 
int main() 
{
    int n,a,b,i; 
    int d[100]; 
    int c[100]; 
    printf("Nhap n: "); scanf("%i",&n); 
    printf("Nhap a,b: "); scanf("%i %i",&a,&b); 
    for (i=0; i<=n-1; i++) 
    {
        printf("%i ",i); scanf("%i %i",&d[i],&c[i]); 
    }
    //Sap xep hai mang <> 
    int r = n-1; 
    int l = 0; 
    int t=0; 
    while (l<r) 
    {
        for (i=l; i<=r-1; i++) if (d[i]>d[i+1]) 
        {
            t = d[i]; d[i]=d[i+1]; d[i+1]=t; 
            t = c[i]; c[i]=c[i+1]; c[i+1]=t; 
        }
        r--; 
        for (i=r; i>=l+1; i--) if (d[i]<d[i-1]) 
        {
            t=d[i-1]; d[i-1] = d[i]; d[i]=t; 
            t=c[i-1]; c[i-1] = c[i]; c[i] = t; 
        }
        l++; 
    }
    int T[100]; 
    int B[100]; //Hai mang chua gia tri cua Tung va Bach 
    T[-1] = 0; B[-1] = 0; 
    for (i=0; i<=n-1; i++) 
    {
        if (c[i]==1) T[i] = T[i-1]+1; 
        else T[i]  =T[i-1]; 
        if (c[i]==2) B[i] = B[i-1]+1; 
        else B[i] = B[i-1]; 
    }
    i = 0; 
    int j = 0; 
    int D = 100000; 
    while (j<=n-1) 
    {

            while ((T[j]-T[i]>=a) && (B[j]-B[i]>=b)) 
            {
                i++; 
                if (D>=d[j]-d[i]) D = d[j]-d[i]; 
            }
            j++; 

    }
    printf("%i",D); 

}