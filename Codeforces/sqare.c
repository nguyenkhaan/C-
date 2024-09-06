#include <stdio.h> 
typedef long long int li; 
int main() 
{
    li m,n,a; 
    scanf("%lld %lld %lld",&m,&n,&a); 
    li S = m*n; 
    li s = a*a; 
    if (s>=S) 
    {
        printf("1"); 
    }
    else 
    {
        li d1; 
        li d2; 
        if (m%a==0) d1 = m/a; 
        else d1 = (int)(m/a)+1; 
        if (n%a==0) d2 = n/a; 
        else d2 = (int)(n/a)+1; 
        printf("%lld",d1*d2); 
    }
    return 0; 
}