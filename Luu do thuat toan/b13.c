#include <stdio.h> 
#include <math.h> 
#include <stdbool.h>
int zeller(unsigned day,unsigned month, unsigned year) 
{
    unsigned a = (14-month)/12;
    unsigned y = year - a;
    unsigned m = month+a*12-2; 
    unsigned dayofweek = (int)(day+y+y/4-y/100+y/400+(31*m)/12)%7; 
    return dayofweek; 
}
int main() 
{
    printf("Nhap nam: "); int n; scanf("%i",&n); 
    //Tim thu dau tien cua nam do 
    int t1,t2; 
    for (int i=1; i<=12; ++i) 
    {
        printf("Thang %i \n",i);
        printf("  S  M  T  W  T  F  S\n"); 
        switch (i)
        {
            case 4: case 6: case 9: case 11: t2=30; break;
            case 2: t2 = 28 +  ((n%400==0) || (n%4==0 && n%100!=0)); break; 
            default: t2 = 31; //Xac dinh so ngay max cua thang do 
        }
        t1 = zeller(1,i,n); 
        for (int m=0; m<t1;++m) printf("  "); 
        for (int m=0; m<=t1-1; m++) printf(" "); //Cach them mot luong dung bang zeller a
        for (int m=1; m<=t2;++m) 
        {
            printf("%3u",m);
            if ((m+t1)%7==0) printf("\n"); 
        }
        printf("\n"); 
        //Cap nhat lai thang moi 
    }

}