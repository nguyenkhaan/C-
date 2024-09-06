#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    /*
    Ngôn ngữ C++ hỗ trợ 3 loại cấp phát bộ nhớ 
    1. Cấp phát tĩnh (static): xảy ra trên biến tĩnh và biến toàn cục và tồn tại trong suốt chương trình
    2. Cấp phát tự động (automatic): xảy ra trên các tham số hàm
    và biến cục bộ khi chương trình đi vào khối lệnh 
    3. Cấp phát động (dynamic)
    --> Số 1 và 2 phải được biết khi biên dịch chương trình 
    Kích thước Stack: 1MB 
    Kích thước Heap: GB 
    --> Dungf toans tu new 
    */
   //char byte[1000000000000000000000000];  //Stack overflow
    int *ptr = new int; //Tao ra mot con tro va tro den doi tuong do va
    //cung chinh la con tro tro den phan tu dau tien cua mang
    *ptr = 10; 
    delete ptr; //trao lai bo nho cho he dieu hanh 
    //memory leak: ro ri bo nho 
    //Cap phat mot mang vecto 
    //Cap phat cho mot vector --> Tạo ra 1 con trỏ trỏ 
    //đến đối tượng đó, chứ k phải là 1 iterator trỏ đến .begin() 
    vector<int> *pt = new vector<int>; 
    pt->push_back(10); 
    cout<<*(pt->begin());  
   return 0;
}