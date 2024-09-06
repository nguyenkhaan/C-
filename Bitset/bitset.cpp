/*
bitset: lưu 1 dãy nhị phân
*/
#include <iostream>
#include <bits/stdc++.h>
#include <string> 
using namespace std; 
int main() 
{
    bitset<10> a(100); //Kich thuoc la hang so. Ta có thể truyền số vào để in ra 
    //bằng cặp dấu () hoặc {"010000"} để truyền vào đó 1 xâu nhị phân 
    // b[0] = 1 truy cap vao bit thu i
    //cout<<b.count(); //Lay ra so luong bit 1 
    //cout<<b.size(); //Kich thuoc cua bitset 
    a = a>>1; //Co the thuc hien phep dich bit duoc luon ne.
    bitset<10> b(100); 
    bitset<10> c(200);  
    cout<<b<<endl; 
    cout<<c<<endl; 
    string s = a.to_string(); //chuyển thành chuỗi 
    bitset<10> d = b | c; 
    string s1 = d.to_string(); 
    int n = 100; 
    cout<<bitset<10>(n); //In thang luon, khong can ten bien cung duoc 
    //Bat mot bit len 
    int n = 100; 
    n = n | (1<<3); 
    cout<<bitset<10> (n); 
    cout<<s1;  
}