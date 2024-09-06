//Đọc hai giá trị m,n ở dòng 1. Sau đó lưu các giá trị còn lai vào mảng a 
#include <stdio.h> 
#include <stdlib.h> 
#define input "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Baitapvefile\\o4.txt"
#define MAX 1000
int main()
{
    FILE *f; 
    int m,n; 
    int a[MAX]; 
    f = fopen(input,"r"); 
    int i=0; 
    fscanf(f,"%d %d",&m,&n); 
    while (fscanf(f,"%d",&a[i])==1)
    {
        i++; 
    }
    for (int j=0; j<i; j++) printf("%d",a[j]); 
    fclose(f);
}