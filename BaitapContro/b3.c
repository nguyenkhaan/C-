//Cho hai mang a va b. Nối 2 mảng đó thành mảng c và sắp xếp giảm dần 
#include <stdio.h> 
#include <limits.h> 
#define MAX 10000
void sort(int *a,int n) 
{
    int l = 0; 
    int r = n-1; 
    int t=0; 
    while (l<r) 
    {
        for (int i=l; i<r-1; i++) if (*(a+i)>*(a+1+i))
        {
            t = *(a+i); *(a+i) = *(a+i+1); *(a+1+i) = t; 
        }
        r--; 
        for (int i=r; i>=l+1; i--) if (*(a+i)<*(a+i-1))
        {
             t = *(a+i); *(a+i) = *(a+i-1); *(a-1+i) = t; 
        }
        l++; 
    }
}
int  *merge(int a[], int b[], int m, int n) //dung con tro de tra ve gia tri dau tien cua mang 
{
    static int c[MAX]; 
    int i=0; 
    int j=0; 
    int k=0; 
    while (i<m&&j<n)  
    {
        c[k++] = a[i]<b[j]?a[i++]:b[j++]; 
    }
    while (i<m) c[k++] = a[i++]; 
    while (j<n) c[k++] = b[j++]; 
    return c; 
}
int main() 
{
    int m; 
    int n; 
    int a[MAX]; 
    printf("Nhap m,n: "); scanf("%i %i",&m,&n); 
    printf("Nhap mang 1: \n");
    for (int i=0; i<m; i++) 
    {
        printf("%i ",i+1); scanf("%i",&a[i]); 
    }
    int b[MAX]; 
    printf("Nhap mang 2: \n"); 
    for (int i=0; i<n; i++) 
    {
        printf("%i ",i+1); scanf("%i",&b[i]); 
    }
    sort(a,m); 
    sort(b,n); 
    int *mang = merge(a,b,m,n); 
    for (int i=0; i<m+n; i++) printf("%i ",*(mang+i)); 

}