//Viet chuong trinh doc mot file van ban va hien thi len man hinh 
#include <stdio.h> 
#include <stdlib.h> 
#define input "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Tep_tin\\o1.txt"
#define MAX 250; 
//#define output C:\Users\DELL\Desktop\Luyen Lap Trinh\Tep_tin
int main() 
{
    FILE *f; 
    char s[100]; 
    f = fopen(input,"r"); 
    char *ch = s; 
    while (fgets(ch,sizeof(s),f)!=NULL) 
    {
        printf("%s",s); 
    }
    fclose(f); 

}