//Trong mot buoi hoc. Teo thinh thoang ghi nham chu so 5 thanh so 6 va nguoc lai 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int min(char A[],char B[]) 
{
    int m = strlen(A); 
    int n = strlen(B); 
    int i; 
    for (i=0; i<=m-1; i++) if (A[i]=='6') A[i]='5'; 
    for (i=0; i<=n-1; i++) if (B[i]=='6') B[i]='5'; 
    int a = atoi(A); 
    int b = atoi(B);
    return a+b; 
}
int max(char A[],char B[]) 
{
    int m = strlen(A); 
    int n = strlen(B); 
    int i; 
    for (i=0; i<=m-1;i++) if (A[i]=='5') A[i] = '6'; 
    for (i=0; i<=n-1; i++) if (B[i]=='5') B[i] = '6'; 
    int a = atoi(A); 
    int b = atoi(B); 
    return a+b; 
}
int main()
{
    char A[100] = ""; 
    char B[100] = ""; 
    printf("Nhap A: "); scanf("%s",&A); 
    printf("Nhap B: "); scanf("%s",&B); 
    printf("%i  %i",min(A,B),max(A,B)); 
}