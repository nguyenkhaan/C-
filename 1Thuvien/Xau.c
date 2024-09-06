#include <stdio.h> 
#include <stdbool.h>
#include <string.h> 
#define MAX 1000
int main() 
{
    char s[250]; 
    printf("Nhap chuoi: "); scanf("%s",s); 
    int n = strlen(s); 
    bool t[MAX+1];
    int i = 0; 
    for (i=0; i<MAX; i++) t[i] = true; 
    i = 0;
    int d=0; 
    while (i<n) 
    {
        if (t[(int)s[i]] == false)
        {
            d++; 
            for (int j=0; j<MAX; j++) t[j] = true; 
        }
        t[(int)s[i]] = false; 
        i++; 
    }
    printf("%i",d+1);
    return 0; 
}