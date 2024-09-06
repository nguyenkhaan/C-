#include <stdio.h> 
#include <stdlib.h> 
#define input "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Tep_tin\\o1.txt"
#define output "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Tep_tin\\o2.txt"
//Cung bai tren, doc du lieu va ghi vao file o2 
int main() 
{
    FILE *f1; 
    f1 = fopen(input,"r"); 
    FILE *f2; 
    f2 = fopen(output,"w"); 
    char s[200]; 
    while (fgets(s,sizeof(s),f1)!=NULL) fprintf(f2,"%s",s); 
    fclose(f1); 
    fclose(f2); 
    return 0; 
}