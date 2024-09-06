/*
Fenwick Tree: Chạy nhanh và Code ngắn hơn Segment tree 
-> Áp dụng cho 1 vài bài nhất định 
-> Một đoạn từ [1 -> i] hoặc [i -> n] thôi 
Cho một mảng a gồ n phần tử. Có các thao tác: 
i v: tăng phần tử từ a[i] lên một lượng là val 
i: tính tổng từ a1 - ai 
n = 13 (1101) -> bỏ bit 1 cuối = 12 ->bỏ bit 1 cuối = 8 -> bỏ bit 1 cuối = 0
+ t[8]: lưu tổng của 8 số và kết thúc tại 8
+ t[12]: lưu tổng 4 số và kết thúc tại 12 
+ t[13]: lưu tổng 1 số và kết thúc tại 13
- Cấu trúc cây: đỉnh thứ i nối sáng với số j sau khi i bỏ đi bit cuôi cùng 
Gọi một mảng t: lưu lại tổng của 2^j số, kết thúc tại i. 
Xét một số n có bit bật cuối cùng ở vị trí j. 
Thì t[n] lưu lại tổng của 2^j số 


*/
/*
Qui tắc bù (biểu diễn số âm) 
1 :     0000001 
Bù 1    1111110 (~)
Bù 2:   1111111 (+1)
*/
/*
Code hàm get: 
Phép x & (-x) ==> Tạo ra một số có binary chỉ có bit 1 tại vị trí
bit 1 cuối cùng của x
*/

/*
code hàm update 
1 -> 2 -> 4 -> 8 
1   10   100  1000 (cộng với chính nó để lên số tiếp theo) 
t[x] += val; 
x += x & (-x); 
*/
