#include <stdio.h> 
#include <iostream> 
#include <cmath>
using namespace std; 
int numberof_chan(int x)
{
    if (x%2 ==0) return x/2; 
    else return floor(x/2); 
}
int tong(int a, int b) 
{
    int n = (b-a)/2+1; 
    return ((a+b)*n)/2; 
}
int tim_so_cuoi(int n)
{ 
    if (n%2==0) return n; 
    else return n-1; 
}
int main()
{
    int m,n; 
    cin>>m>>n;
    int chan_hang = numberof_chan(m); 
    int le_hang = m -chan_hang; 
    int chan_cot = numberof_chan(n); 
    int le_cot = n - chan_cot; 
    //Tính số lượng số chẵn, số lẻ trong hàng và cột 
    int chan_cuoi,le_cuoi; 
    chan_cuoi = tim_so_cuoi(m); 
    le_cuoi = 2*m-1-chan_cuoi; 
    int s1 = tong(1,chan_cuoi-1); 
    int s2 = tong(0,le_cuoi-1); 
    //Tính s1 và s2 lần lượt là tổng số chẵn, số lẻ trong hàng 
    chan_cuoi = tim_so_cuoi(n); 
    le_cuoi = 2*n-1-chan_cuoi; 
    int s11 = tong(1,le_cuoi); 
    int s22 = tong(2,chan_cuoi); 
    //Tính s11 và s22 lần lượt là tổng số chẵn và lẻ trong cột 
    int sum = n*s1*chan_cot + s11*le_hang + s2*n*le_cot + s22*chan_hang;
    cout<<sum; 
    return 0;
}