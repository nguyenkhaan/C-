#include <stdio.h> 
#include <stdlib.h> 
#define MAX 1000 
int main() 
{
    int m; 
    scanf("%i",&m);
    for (int j=0; j<m; j++)
    {
        int pos = 1; 
        int n; 
        scanf("%i",&n); 
        int i; 
        int d=0; 
        int a[MAX]; 
        int t[MAX]; 
        for (i=1; i<=n; i++)  //Thiet lap mang a va mang t 
        {
            scanf("%i",&a[i]); 
            t[i] = i; 
        }
        while (pos!=0) 
        {
            pos = 0; 
            for (i=n-1; i>=1; i--) if (a[i]==t[i]) //Kiem tra xem a[i] = t[i]? 
            {
                pos = i; 
                d++; 
                break; 
            }
            if (pos!=0)
            {
                n-=2; 
                for (i=pos; i<=n; i++) a[i] = a[i+2]; 
                for (i=1; i<=n; i++) t[i] = i;  
            }
        }
        printf("%d\n",d);
    }
    return 0; 
}