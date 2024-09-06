#include <stdio.h> 
#include <iostream> 
using namespace std; 
//Nhược điểm truyền bình thường: làm cho một biến bị sao chép nhiều lần --> Giảm hiệu suất 
//trả về nhiều giá trị cho hàm 
//Tham chiếu là một loại biến hoạt động như một bí danh của biến khác 
//Khai báo bằng cách dùng ký hiệu & đặt giữa kiểu dữ liệu và tên biến. 
//Khi truyền tham chiếu thì phải truyền một biến, k dùng 1 hằng số 
void callByReference(const int &y) 
{
    //Tham chieu hang: Khong duoc thay doi gia tri 
    //DOi so cua tham chieu hang co the la 1 hang so 
    cout<<y; 
}
int main() 
{
    int x; 
    cin>>x; 
    callByReference(x);
    cout<<x; 
    return 0; 
}