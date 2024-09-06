#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    FILE *f; 
    //1,2 Tạo và mở file 
    f = fopen("Bai_088.txt","r"); 
    if (f==NULL) 
    {
        printf("Loi cmnr"); 
        return 0; 
    }
    //3 Đọc dữ liệu 
    int n; 
    for (int i=0; i<6; i++) 
    {
        fscanf(f,"%i",&n); 
        printf("%i ",n);
    }
    fclose(f); 
    //4. Đóng file 
   
    
    return 0; 
}