#include <stdio.h> 
#include <string.h> 
#include <stddef.h>
//Thu vien lay do dai chuoi
int len(char* s) 
{
   int length=0; 
   while (s[length]!='\0') length++; 
   return length; 
}
//Thu vien chen ham 
char* insert(char* s1,char* s, int index) 
{
    int l = strlen(s),r=strlen(s1); 
    char s2[255]=""; 
    int i = l-1; 
    int j = l+r-1;  
    while (i>=index) 
    {
        s[j] = s[i]; 
        i--; 
        j--;
    }      
    i = index; 
    int m=0; 
    while (m!=r) 
    {
        s[i] = s1[m]; 
        i++; 
        m++; 
    }
    return s;  
}
//Thu vien xoa chuoi tai vi tri so i 
char* delete(char* s,int index) 
{
    for (int i=index; i<=strlen(s)-2;i++) s[i] = s[i+1]; 
    return s; 
}

void *assign(void *src, void *dest, size_t n) //Copy thu vien memcpy, se tim hieu sau
{
    char *d = (char *)dest;
    const char *s = (const char *)src;
        for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}