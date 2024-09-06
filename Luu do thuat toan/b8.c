#include <stdio.h> 
struct hoandoi{
    int m; //Cac thanh phan nho trong Struct 
    int n; 
};
struct hoandoi swap(int a, int b) 
{
    int t=a; 
    a=b; 
    b=t; 
    struct hoandoi A;//Khai bao bien A co kieu Du lieu hoan doi 
    A.m=a; 
    A.n=b; 
    return A; 
}
int main() 
{
    struct hoandoi A; //Khai bao bien A co kieu du lieu HoanDoi 
    A = swap(2,5); 
    printf("%i %i ",A.m,A.n);
}