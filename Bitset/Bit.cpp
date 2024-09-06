/* 
Bitwise: 
- Thứ tự ưu tiên phép toán :v 
+) Ta có thể thực hiện cộng hai số nhị phân 
--> Nguyên tắc: 1 + 1 = 10 
AND (&) 1 && 1 = 1, tất cả phép khác là 0 
Vd: 101110 (Min giữa các bit)
    101001 = 101000
OR (|) Phép max bit  --> một trong 2 cái là 1 thì nó là 1 
Vd: 1011110 
    1010000 = 
XOR (^) kiểm tra 2 bit đó có khác nhau không 
+) Khác nhau: 1 
+) không khác nhau thì là 0
Vd: 101110 (cộng không nhớ và có tính giao hoán) 
    100001 = 001110
- Đặc tính: 
+) Có tính giao hoán 
+) lẻ số 1 thì ra 1, chẵn số 1 thì ra 0 
Đảo bit (~) 01001 (mask)
Dịch bit trái: X<<1 1010 = 10100 -> dịch tất cả sang 1 
--> 10 -> 20 hay là nhân với 2 mũ của số dịch 
101000 
Dịch bit phải: X>>1 
1010 -> 101 -> 10 hay là 10 5 2 (chia với 2 mũ dịch tương ứng)
Bật bit tại vị trí thứ i () mask |= (1<<i) 
VD: 10010010 
    00001000 
--> Lấy số ban đầu, lấy | với số 1 được dịch bit sang trái 3 lần 
Tắt bit tại vị trí thứ i  mask &= (1<<i); 
Vd: 10010010 
    11101111
    00000010
Đảo bit tại vị trí thứ i: mask^= (1<<i); 
-> Lấy phép & của ~(1<<2) 
Chú ý: 
1. (x>>2)<<2 --> nó không về lại số ban đầu đâu 
2. Phép dịch bit nó trả về số nguyên nhan :v. Còn 3 cái kia thì trả về nhị phân 

- Bit thứ i của con số N là thứ gì? 
10010 -> đánh số từ phải sang trái 0 1 2 3 ... 
Lẻ (bit0 = 1) lấy phép & với 1 
(n&1) = 1 thì lẻ, =0 thì chẵn 
- (n>>0)&1 
- (n>>1)&1 

*/
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    for (int i=31; i>0; i--)
    {
       cout<<((x>>i)&1);
    }
    /*
    MỘT SỐ HÀM XỬ LÍ 
    __builtin_popcount(int num): đếm số bit 1 của num 
    - Cái int nó chỉ có 32 bit thôi, tương ứng với 4 byte. Do đó 
    nếu muốn dịch kiểu long long thì mình phải dịch full là long long 
    __builtin_ctz(x): đếm số bit từ cuối (phải) lên 
    __builtin_clz(x); đếm số bit 0 từ bên trái qua  


    */
   //long long x = 1ll<<36; 
   //cout<<__builtin_popcountll(x); 
    cout<<__builtin_ctz(100); 

}