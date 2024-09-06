/*
Biểu thức lambda (hàm nặc danh) 
Cú pháp chung: auto Tenham = [captures List](parameter List) -> return type {} (parameterList 2)
Capture Lists: danh sách tham trị và tham chiếu 
    &: lấy tham chiếu tất cả các biến nằm bên ngoài lambda 
    =: lấy tham trị tất cả các biến nằm bên ngoài lambda 
    &var: lấy tham chiếu 1 biến bất kì bên ngoài lambda 
    var: lấy tham trị 1 biến bất kì trong lambda 
parameter List: danh sách tham số truyền vào (lưu ý không truyền tham chiếu nhan :v) 
return Type: kiểu dữ liệu trả về 
return Type: kiểu dữ liệu trả về, nếu để trống thì mặc định là void 
para2: danh sách tham số truyền vào (có thể đóng vai trò là lời gọi lambda ngay lập tức)
- Ta có thể gán biểu thức lambda này cho biểu thức lambda khác, lúc này câu lệnh 
của biểu thức lambda đầu tiên sẽ bị thay đổi 
1. Sử dụng lambda ngay lập tức 
- Ta chỉ việc khai báo biến lambda và sử dụng như thường
- Biến trả về giá trị thì phải có biến hứng nó 
2. Sử dụng lambda với câu lệnh auto 
- Biểu thức lambda sẽ được trả về kiểu dữ liệu auto. Ta có thể xem như đây là 
việc đặt tên biến 
auto add = <lambda expression> 
- Lúc này ta có thể dùng lambda như 1 hàm thông thường với tên add(tham so truyen vao)
- Lưu ý: không sử dụng (paralist2) với từ khóa auto 
3. Sử dụng với câu lệnh for_each trong algorithm 
- Câu lệnh for_each trong algorithm dùng để duyệt qua tất cả phần tử trong 1 vectors
lưu từng biến của vector vào tham số n của lambda 
for_each(v,begin(), v.end(), [](int n)->void
{
    cout<<n*n; 
}); 
4. Truyền lambda vào hàm 
- Cấu trúc truyền:    function<kiểu dũ liệu trả về(kiểu dữ liệu từng tham số)> ten_lambda
- Phải dùng với câu lệnh auto
*/