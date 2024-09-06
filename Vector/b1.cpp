#include <iostream> 
#include <bits/stdc++.h>
#include <string>
#include <string.h> 
using namespace std; 
int main() 
{
    //Cau truc khai bao: vector<kieuDL> tenvecto
    vector<int> v; 
    //Day 1 phan tu vao vector v.push_back
    v.push_back(10); 
    v.push_back(20); 
    //SO luowng kich thuoc cua vector 
    cout<<v.size()<<endl;
    v.push_back(30); 
    //Truy cap cac phan tu trong vector thong qua chi so 
    for (int i=0; i<v.size(); i++) cout<<v[i]<<endl; 
    //Vector cuoi: v.back() 
    //Truy cập các phần tử của vecto theo giá trị 
    for (int x:v) cout<<x<<endl;
    //Truy cập phần tử bằng con trỏ (iterator)
    //v.begin()         v.end(): hai con trỏ trỏ tới đầu tiên vàn đằng sau phần tử cuối cùng
    
  //  for (vector<int>::iterator it = v.begin(); it!=v.end(); it++)
   // {
       // printf("%d",*it); 
  //  }
    //for (auto it = v.begin(); it!=v.end(); it++) 
   // {
     //   cout<<*it<<endl; 
   // }
    vector<int> v1; 
    //Tao mọt vecto co san 15 phan tu 
    //Nhap du lieu cho vecto 
    for (int i=0; i<4; i++)
    {
        int x; cin>>x; 
        v1.push_back(x); 
    }
    //Khai báo 1 vector và gán giá trị cho tất cả vec tor đó: 
    vector<int> k(1000,0); 
    //Khai bao 1 vecto co 10 phan tu va tat ca deu co gia tri la 100 
    k.push_back(50); 
    vector<string> h; 
    h.push_back("lap trinh"); 
    h.push_bacl("DSA"); 
    

}
