#include <stdio.h> 
#define MAX 2000000
#define max(a,b) ((a>=b)?a:b)
#define min(a,b) ((a<=b)?a:b)
int main() 
{
    int t; 
    scanf("%i",&t); 
    int j; 
    for (j=0; j<t; j++)
    {
        int n; 
        scanf("%i",&n); 
        int a[MAX]; 
        int b[MAX]; 
        int i=0; 
        for (i=0; i<n; i++) scanf("%d",&a[i]); 
        for (i=0; i<n; i++) scanf("%d",&b[i]); 
        int s1=0; int s2=0; 
        int l[MAX]; 
        int k=0; 
        for (i=0; i<n; i++) 
        {
            if (a[i]!=b[i]) 
            {
                if (a[i]==-1) a[i] = 0; 
                if (b[i]==-1) b[i] = 0; 
                s1+=a[i]; 
                s2+=b[i]; 
            }
            else l[k++] = a[i]; 
        }
        for (i=0; i<k; i++) 
        {
            if (s1<=s2) 
            {
                s1+=max(0,l[i]); 
                s2+=min(0,l[i]); 
            }
            else 
            {
                s1+=min(0,l[i]); 
                s2+=max(0,l[i]); 
            }
        }
        printf("%d\n",min(s1,s2));
    }
    return 0; 
}