#include <stdio.h>
#define MAX 100008
typedef long long lli; 
typedef long int li; 
int main() 
{
    lli T; 
    scanf("%lli",&T);
    for (lli j=0; j<T; j++)
    {
    lli a[MAX]; 
    lli n; 
    scanf("%lli",&n); 
    lli i; 
    for (i=0; i<n; i++) scanf("%lli",&a[i]);
    lli t[MAX]; 
    t[0] = a[0]; 
    lli max = 0; 
    for (i=1; i<n; i++) 
    {
        if (a[i]>=t[i-1]) t[i] = a[i]; 
        else t[i] = t[i-1];  //Tim max 
    }
    lli ans = 0; 
    for (i=0; i<n; i++) { t[i] = t[i] - a[i]; if (max<=t[i]) max = t[i]; } 
    for (i=0; i<n; i++) 
    {
        ans+=t[i]; 
    }
    ans+=max; 
    printf("%lli\n",ans);
    }
    return 0; 
}