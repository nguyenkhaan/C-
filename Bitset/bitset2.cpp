#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n = 100; 
    cout<<bitset<10> (n)<<endl; 
    //Tat bit so 2 
    if ((n>>2) & 1) n -= (1<<2); //Phep cong trong he nao khong quan trong 
    cout<<bitset<10> (n)<<endl; 
    //Bat lai bit so 2 
    if (((n>>2) & 1) == 0) n+=(1<<2); 
    cout<<bitset<10> (n); 
}