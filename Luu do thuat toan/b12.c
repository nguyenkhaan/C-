#include <stdio.h> 
#include <string.h> 
int zeller(unsigned day,unsigned month, unsigned year) 
{
    unsigned a = (14-month)/12;
    unsigned y = year - a;
    unsigned m = month+a*12-2; 
    unsigned dayofweek = (day+y+y/4-y/100+y/400+(31*m)/12)%7; 
    return dayofweek; 
}
int main() 
{
    printf("Nhap ngay thang nam: "); 
    int day,month,year; scanf("%i %i %i",&day,&month,&year); 
    printf("%2u",zeller(day,month,year)); 
}