//Viet chuong trinh doc tung ki tu trong file va in ra man hinh 
#include <stdio.h> 
#include <stdlib.h> 
#define input "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Baitapvefile\\o3.txt"
int main() 
{
    FILE *f; 
    int c;
    f = fopen(input,"r"); 
    while ((c=fgetc(f))!=EOF)
    {
        putchar(c); 
    }
    fclose(f);
}