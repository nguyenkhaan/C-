#include <stdio.h> 
#include <stdbool.h>
/*Hay hieu rang moi lan lam de quy thi dong nghĩ voi viec minh tao ra them 1 nut tren 
cai cay nhi phan, luc do thi dong nghia mnh da tao ra them 1 cai code y chang nhu v
VD: code cua ban thuc te co 1 v lap, nhung ban goi de quy 3 lan dong nghia ham do ban da
su dung toi 3 vong lap =0)*/
int a[1000]; 
int n=0; 
bool t[100]; 
void incauhinh(int m) 
{
    for (int i=0; i<=m-1; i++) 
    {
        printf("%i  ",a[i]); 
    }
    printf("\n"); 
}
void try(int i) 
{
    int j; 
    for (j=0; j<=n-1; j++) if (t[j])
    {
        a[i] = j; 
        t[j] = false; 
        if (i==n-2) 
        {
            incauhinh(i);
            t[j] = true; 
        }
        else try(i+1); 
    }

}
int main() 
{
    printf("Nhap n: "); scanf("%i",&n); 
    for (int i=0; i<=100; i++) t[i]=true; 
    try(0); 
}