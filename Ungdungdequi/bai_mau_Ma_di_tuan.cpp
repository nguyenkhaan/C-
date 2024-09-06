#include<iostream>
#include<stdio.h>
#define MAX 6
using namespace std;
int A[MAX][MAX] = { 0 };//Khởi tạo mảng giá trị 0
int X[4] = {1,-1,0,0};
int Y[4] = {0,0,-1,1};
int dem = 0;//Số bước đi
int n;
int d=0; 
int max1 = 100;
int L[MAX][MAX] = { 0 }; 
int T[5][5] = {
	{0,0,1,1,1},
	{1,1,1,0,0},
	{0,1,0,0,0},
	{0,0,0,0,0},
	{1,0,0,1,0} }; 
void xuat(int m) 
{
	if (max1>=m) 
	{
		max1 = m; 
		for (int i=0; i<n; i++) 
		for (int j=0; j<n; j++) L[i][j] = A[i][j]; 
	}
	d=0;
}
void diChuyen(int x, int y) {
	++dem;//Tăng giá trị bước đi
	if ((T[x][y]==1) && (A[x][y]==0)) ++d; 
	A[x][y] = dem;//Đánh dấu đã đi
	for (int i = 0; i < 4; i++)	
	{
		//Kiểm tra xem mã đã đi hết bàn cờ chưa
		if (dem == n * n || d==9) 
		{
			xuat(A[x][y]);
			//kết thúc chương trình
		}
		//Nếu chưa đi hết bàn cờ thì tạo bước đi mới
		int u = x + X[i];//tạo một vị trí x mới
		int v = y + Y[i];//tạo một vịi trí y mới
		//Nếu hợp lẹ thì tiến hành di chuyển
		if (u >= 0 && u < n&&v >= 0 && v < n && A[u][v]==0) diChuyen(u, v);
	}
	//Nếu không tìm được bước đi thì ta phải trả lại các giá trị ban đầu
	--dem;
	A[x][y] = 0;
	--d; 
}
int main() {
	cout << "Nhap n: ";
	cin >> n;
	int a, b;
	cout << "Nhap vi tri ban dau.nx: ";
	cin>>a;
	cout << "y: ";
	cin >> b;
	cout<<"\n"; 
	diChuyen(a, b);
	//Nếu không tìm được bước đi thì sẽ thông báo
	for (int i=0; i<n; i++) 
	{
		for (int j=0; j<n; j++) printf("%d ",L[i][j]); 
		printf("\n"); 
	} 
}