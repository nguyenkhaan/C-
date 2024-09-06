#include <stdio.h> 
#include <stdlib.h>
int main() 
{
    //1. Tạo 
    //2. Mở 
    //--> Su dung ham fopen 
    //3. Đọc và ghi 
    //4. Đóng file 
    FILE *f; 
    f = fopen("Bai_088.txt","w"); 
    //Mo file ở chế độ ghi 
    if (f==NULL){
        printf("\n Loi cmnr"); 
        return 0; 
    }
    int n; 
    printf("Nhap n: "); scanf("%i",&n); 
    fprintf(f,"%d",n); 
    //Hàm dùng để ghi dữ liệu vào file, có thêm chữ f 
    //phía trước, còn lại như printf 
    fclose(f); 
    return 0; 
}