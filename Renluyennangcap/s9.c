#include <stdio.h> 
#include <string.h> 
#define chen_ki_tu(s,p,m,ch) do \
{ \
    for (int i=m+1;i>=p+1;i--) s[i] = s[i-1]; \
    s[p] = ch; \
} while (0);

struct sinhvien{
    char hoten[20]; 
    float gpa; 
    char diachi[20]; 
    char date[20]; 
}; 
typedef struct sinhvien sinhvien; 
sinhvien nhap() 
{
    sinhvien x; 
    printf("Ho ten: "); scanf("%s",&x.hoten); 
    printf("Dia chi: "); scanf("%s",&x.diachi); 
    printf("Ngay thang nam sinh: "); scanf("%s",&x.date); 
    printf("GPA: "); scanf("%f",&x.gpa); 
    return x; 
}
sinhvien chuyen_ngay(sinhvien x) 
{
    int n = strlen(x.date); 
    int i=0; 
    int d=0; 
    char ch = '0'; 
    //Chen 0 vao ki tu ban dau 
    while (1==1) if (x.date[i] == '/')
    {
        if (i%2==0) break;
        else 
        {
            chen_ki_tu(x.date,0,n-1,'0'); 
            n++; 
            break; 
        }
        i++; 
    }
    i = n-1; //n la do dai cua chuoi 
    while (1==1) if (x.date[i]=='/')
    {
        if (i%2!=0) break; 
        else
        {
            chen_ki_tu(x.date,i,n-1,'0'); 
            break;
        }
        i--; 
    }
    return x; 
}
void xuat(sinhvien x)
{
    printf("Ho ten: %s\n",x.hoten);  
    printf("Dia chi: %s\n",x.diachi); 
    printf("GPA: %f\n",x.gpa);
    printf("ntns: %s",x.date);
}
int main()
{
    sinhvien x; 
    x = nhap(); 
    x = chuyen_ngay(x); 
    xuat(x); 
}

