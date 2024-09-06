#include <iostream> 
#include <stdio.h> 
#include <algorithm>
using namespace std; 
void max(int *a, int *b, int *c, int *d)
{
    int pos = 0; 
    int max = 0; 
    if (max<=*a) {pos = 1; max = *a;}
    if (max<=*b) {pos = 2; max = *b;}
    if (max<=*c) {pos = 3; max = *c;} 
    if (max<=*d) {pos = 4; max = *d;}
    switch (pos)
    {
        case 1: cout<<*a; *a = -1; break; 
        case 2: cout<<*b; *b = -1; break; 
        case 3: cout<<*c; *c = -1; break; 
        case 4: cout<<*d; *d = -1; break; 
    }
}
int main()
{
    int A,B,C,D; 
    cin>>A>>B>>C>>D;
    max(&A, &B, &C, &D);
    max(&A, &B, &C, &D);
    max(&A, &B, &C, &D);
    max(&A, &B, &C, &D);
    return 0;
}