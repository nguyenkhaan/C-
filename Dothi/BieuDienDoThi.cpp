/*
1. Ma trận kề 
- m: số đỉnh 
- n: số cạnh 
- Nếu đồ thị có n đỉnh thì cần ma trận 
(nxn) để biểu diễn
- Nếu có đường nối từ đỉnh (i - j) thì a[i][j] = 1. 
Ngược lại a[i][j] = 0  
- Đối với đồ thị vô hướng: a[i][j] = a[j][i] 
0 1 2 3 4 5 6
1 0 1 1 1 0 0
2 1 0 0 1 0 0
3 1 0 0 1 1 1
4 1 1 1 0 0 1
5 0 0 1 0 0 1
6 0 0 1 1 1 0
- Là 1 ma trận đối xứng qua đường chéo chính  
- Tổng các phẩn tử = 2 lần số cạnh 
ĐỒ THỊ CÓ HƯỚNG
0 1 2 3 4 5 6
1 0 1 1 1 0 0 
2 0 0 0 1 0 0 
3 0 0 0 1 1 1
4 0 0 0 0 0 1
5 0 0 0 0 0 1
6 0 0 0 0 0 0
- Ma trận trọng số: giữa các cạnh có thêm một trọng số,
nếu giữa i và j có trọng số là k. thì 
a[i][j] = k; 
0 1  2  3  4   5   6
1 0 10  5  18  0   0
2 0  0  0  12  0   0
3 0  0  0  5  14   5
4 0  0  0  0   0   8
5 0  0  0  0   0   7
6 0  0  0  0   0   0
2. Danh sách cạnh
- Nếu tồn tại cạnh giữa 2 đỉnh A,B. Ta chỉ cần viết 
cạnh đầu: A, cạnh cuối: B 
Đỉnh đầu    Đỉnh cuối 
- Nếu có trọng số thì thêm một cột trọng số 
3. Danh sách kề 
Đỉnh     Danh sách kề (list,vector,...)
1           {2,3,4}
2           {1,4} 
3           {1,4,5,6} 
4           {1,2,3,6} 
5            {3,6}
6           {3,4,5}  
*/