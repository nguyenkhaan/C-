//Viet chuong trinh doc du lieu tu 1 file van ban, va in ra dong van ban 
//do trong 1 file khac 
#include <stdio.h> 
#include <stdlib.h> 
#define inp "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Baitapvefile\\o1.txt"
#define out "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Baitapvefile\\o2.txt"
int main()
{
    FILE *f1; 
    f1 = fopen(inp,"r"); 
    char s[200]; 
    FILE *f2; 
    f2 = fopen(out,"w"); 
    while (fgets(s,sizeof(s),f1)!=NULL) 
    {
        fprintf(f2,"%s",s); 
    }
    fclose(f1); 
    fclose(f2); 
}