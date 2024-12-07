 * Tư tưởng của giải thuật: 
 * - Tìm kiếm thành phần liên thông mạnh trên đồ thị 
 * - Các bước thực hiện: 
 * b1: Duyệt dfs đồ thị ban đầu, tìm ra thứ tự sắp xếp topo trên đó và lưu vào một stack 
 * b2: Tạo ra một đồ thị chuyển vị (TG - Transpo Graph) 
 * b3: Lấy lần lượt các đỉnh đầu stack và duyệt dfs trên TG -> đếm số thành phần liên thông 
 * Lí do phải tạo TG: một đồ thị liên thông mạnh khi có đường đi từ A - B cũng như 
 * từ đỉnh B - A -> tạo ra 1 TG 