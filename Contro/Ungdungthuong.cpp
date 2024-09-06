 
     //Dau * dong vao tro khai bao con tro 
    //Thu 2 
    //Dau & hương con tro den 1 bien 

    //Toan tu * dung de lay gia tri cua bien ma con tro dang tro toi 
    //Thu 3  

    //Thu 4 
    //Khi con tro la nullptr nếu gọi thì sẽ bị lỗi 
    //Thu 5 

   
   //Ứng dụng của con trỏ trong mảng 
#include <iostream> 
struct Con_nguoi{
    Con_nguoi(int t, int v1, int cc) 
    {
        chieu_cao = cc; 
        tuoi = t; 
        vong_mot = v1; 
    }
    int tuoi; 
    float vong_mot; 
    float chieu_cao; 
};
int main() 
{
    Con_nguoi thao(12,95,1.6); 
    Con_nguoi lan(14,96,1.8); 
    Con_nguoi huong(16,99,1.8); 
    //Con tro la mot bien dac biet, am chi mot bien x nao do thong qua dia chi cua bien x do 
    //Con tro la mot bien ma gia tri cua no la dia chi cua mot bien khac
    Con_nguoi *bo_nhi = nullptr;
    //Toan tu * dung de khai bao con tro co kieu du lieu la Con_nguoi va tro toi 1 bien 
    //nullptr la 1 con tro rỗng, không thể in ra giá trị 
    bo_nhi = &thao; 
    //Toan tu & dung de tro con tro toi 1 bien 
    std::cout<<(*bo_nhi).tuoi<<std::endl; 
    //Toán tử * dùng để chiết xuất giá trị của 1 biến mà con trỏ đang trỏ tới 
     /*Phép toán tăng giảm giá trị 
    Viec cong tru nay khi lam viec voi cac bien don sẽ gây ra rất nhiều rủi ro, tùy thuộc cơ chế
    của từng trình biên dịch ---> ta nên dùng với các kiểu dữ liệu tập hợp 
    (mảng, linked list, node...) 
    */
    return 0; 
}