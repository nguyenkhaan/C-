#include <stdio.h> 
void merge(int a[],int l, int m, int r) 
{
    int n1 = (m-l); //gia tri ket thuc cua chuoi 2
    int n2 = (r-m-1); //gia tri ket thuc cua chuoi 1
    int i=0,j=0,k=l; 
    int L[n1]; 
    int R[n2]; 
    for (i=0;i<=n1; i++ ) L[i] = a[i+l];  //Tach thanh hai mang rieng re 
    for (j=0; j<=n2; j++) R[j] = a[m+1+j]; 
    i=0; 
    j=0; 
    while (i<=n1 && j<=n2)  //Tron hai mang 
    {
        a[k++] = (L[i]<=R[j])?L[i++]:R[j++];
    }
    while (i<=n1) a[k++] = L[i++]; //Tron cac phan tu con thua cua mang 1
    while (j<=n2) a[k++] = R[j++]; //Tron cac phan tu con thua cua mang 2
}
void sort(int a[], int l, int r) 
{
    if (l<r) 
    {
        int m = (l+r)/2; 
        sort(a,l,m); 
        sort(a,m+1,r); 
        merge(a,l,m,r); 
    }
}
int main()
{
    int a[] = {1,3,2,5,4}; 
    int arr_size = sizeof(a)/sizeof(a[0]);
    sort(a,0,arr_size-1); 
    for (int i=0; i<=4; i++) printf("%i  ",a[i]); 
    return 0;
}