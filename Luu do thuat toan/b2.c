#include <stdio.h> 
#include "cs50.h"
#include <math.h>  
const float pi = 3.14; 
int main() 
{
    float r = get_float("Nhap ban kinh: "); 
    printf("Dien tich hinh tron: %.2f \n",pi*r*r); 
    printf("Chu vi hinh tron: %.2f",pi*2*r); 
    printf("\\n"); 
}