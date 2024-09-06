#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
void tinh_toan(int a, int b) 
{
    cout<<"Phep and: "<<(bitset<6> (a&b))<<endl; 
    cout<<"Phep or: "<<(bitset<6> (a|b))<<endl; 
    cout<<"Phep xor: "<<(bitset<6> (a^b))<<endl; 
    cout<<"Phep dao bit: "<<(bitset<6> (~a))<<endl; 
}
void dich_bit (int a, int x) 
{
    cout<<"Dich bit trai: "<<(bitset<6> (a<<x))<<endl; 
    cout<<"Dich bit phai: "<<(bitset<6> (a>>x))<<endl; 
}
void bat_tat_bit(int a, int x) 
{
    int n = a | (1<<x); 
    cout<<"Bat bit: "<<(bitset<6> (n) )<<endl;
    n = a & (~1<<x); 
    cout<<"Tat bit: "<<(bitset<6> (n))<<endl; 
    n = a ^(1<<x); 
    cout<<"Dao bit: "<<(bitset<6> (n))<<endl; 
}

int main() 
{
    int a,b; 
    cin>>a>>b; 
    cout<<(bitset<6> (a))<<"\n:"<<(bitset<6>(b))<<endl; 
    tinh_toan(a,b); 
    dich_bit(a,2); 
    bat_tat_bit(a,2);
}