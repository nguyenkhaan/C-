/*
1. Đồ thị: bao gồm đỉnh và cạnh 
VD: mạng xã hội, bản đồ có các đường nối với nhau 
G = <V,E> 
* V: là tập các đỉnh (Verticles) 
* E: là tập các cạnh (Edge) 
a) Đơn đồ thị vô hướng: 
- Đơn: chỉ có 1 cạnh nối 2 đỉnh 
- Vô hướng: cạnh không có hướng 
b) Đa đồ thị vô hướng: 
- Đa: nhiều cạnh nối 2 đỉnh 
- Vô hướng: cạnh không có hướng 
- Nếu 2 cạnh d1,d2 chung 1 đỉnh thì gọi là cạnh bội 
c) Giả đồ thị vô hướng: 
- Một cạnh nối 2 đỉnh giống nhau 
VD: A ------- A (đỉnh đeo khuyên) 
e) Đơn đồ thị có hướng: 
- Đơn: có nhiều nhất 1 cạnh nối 2 đỉnh 
- Có hướng: cạnh có hướng 
f) Đa đồ thị có hướng 
- Đa: có nhiều cạnh nối giữa 2 đỉnh 
- Có hướng: cạnh có hướng 
2. Đỉnh kề và cạnh liên thuộc: 
A ------ B: 2 đỉnh kề nhau 
---------: cạnh liên thuộc vs A,B 
3. Bậc của đồ thị vô hướng (deg(u)) 
- Là số cạnh liên thuộc của đỉnh đó 
- Chỉ dùng cho đồ thị vô hướng 
vd: A-------B---------C
            -
            -
            -
            D
deg(B) = 3 
deg(A) = 1 
deg(C) = 1 
deg(D) = 1 
- Đỉnh có deg = 0 -> cô lập 
- Đỉnh có deg >=1 -> treo 
- deg = 2 * e 
4. Bán bậc của đồ thị có hướng 
- Bán bậc ra: các đường đi ra khỏi đỉnh U 
- Bán bậc vào: các đường đi vào của đỉnh U 
deg(+) = deg(-) = e 
=> deg(+) + deg(-) = 2 * e 
5. Đường đi: 
- Là dãy các đỉnh, trong đó 
có đường nối tm từ A tới B 
    + Đường đi đơn: các đỉnh trên đường đi phân biệt 
    Vd: (A,B,C,D,E): đường đi đơn 
- Chu trình: 
- Là đường đi có đỉnh đầu và đỉnh cuối trùng nhau 
7. Liên thông: một đồ thị gọi là liên thông, nếu giữa 
2 đỉnh i và j thì luôn có đường đi từ i -> j 
- Thành phần liên thông: Đồ thị có thể phân rã 
thành nhiều đồ thị nhỏ và liên thông với nhau 
8. Sức mạnh liên thông 
- Nếu ta bỏ hết 
*/