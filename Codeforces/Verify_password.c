#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
#include <stdlib.h>
#define MAX 255
bool check(char c) 
{
    if (c>='a' && c<='z') return true; 
    if (c>='0' && c<='9') return true; 
    return false; 
} 
bool verify_password(char s[], int n) 
{
    int i; 
    char a[MAX];  int r = 0; 
    char st[MAX]; int l = 0; 
    for (i=0; i<n; i++) 
    {
        if (check(s[i])==false) return false;
        else
        {
            char *ch = &s[i]; 
            if (s[i]>='a' && s[i]<='z') st[l++] = s[i]; 
            if (s[i]>='0' && s[i]<='9')  a[r++] = s[i]; 
        }
    }
    for (i=1; i<n; i++) if ((s[i]>='0' && s[i]<='9') && (s[i-1]>='a' && s[i-1]<='z')) return false; 
    //Day theo thu tu tang dan 
    for (i=1; i<l; i++) if (st[i]<st[i-1]) return false; 
    for (i=1; i<r; i++) if (a[i]<a[i-1]) return false; 
    return true; 

}
int main() 
{
    int t; 
    scanf("%i",&t); 
    for (int j=0; j<t; j++) 
    {
    int n; scanf("%i",&n); 
    char s[MAX]; 
    scanf("%s",s); 
    if (verify_password(s,n)==true) printf("YES\n"); 
    else printf("NO\n");
    }
    return 0; 
}