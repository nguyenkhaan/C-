#include <stdio.h> //Ban huong doi tuong cho chưa phai la huong doi tuong =))
struct hocsinh{
    float toan; 
    float van; 
    char hoten[20]; 
}; 
typedef struct hocsinh hocsinh; 
hocsinh nhap() 
{
    hocsinh x; 
    printf("Nhap ho ten: "); scanf("%s",&x.hoten); 
    printf("Nhap van: "); scanf("%f",&x.van); 
    printf("Nhap toan: "); scanf("%f",&x.toan); 
    return x; 
}
float trungbinh(hocsinh x) 
{
    return (x.toan+x.van)/2; 
}
void xuat(hocsinh x) 
{
    printf("Ten: %s\ntrung binh: %.3f",x.hoten,trungbinh(x)); 
} 
int main() 
{
    hocsinh x; 
    x = nhap(); 
    xuat(x); 
}