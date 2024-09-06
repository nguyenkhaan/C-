#include <stdio.h> 
typedef long int li; 
int main() 
{
    li t;
    scanf("%li",&t);
    for (int j=0; j<t; j++)
    {
    li n,k; 
    scanf("%li %li",&n,&k); 
    li d=1; 
    li s=0; 
    while (d<n) 
    {
        s = (k-1)*d; 
        d++; 
        
    }
    printf("%li \n",s+d); 
    }
    return 0; 

}