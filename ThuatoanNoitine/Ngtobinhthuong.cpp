#include <stdio.h> 
#include <iostream>
#include <chrono>
using namespace std; 
bool Check(int &n) 
{
    for (int i = 2; i*i<=n; i++) if (n%i == 0) 
    {
        return false; 
    }
    return true; 
}
int main() 
{
    auto start = std::chrono::high_resolution_clock::now();
    int n =  1000000; 
    int d = 0;
    for (int i=2; i<=n; i++) 
    {
        if (Check(i) == true) d++; 
    }
    auto end = std::chrono::high_resolution_clock::now();
    // Tính toán thời gian chạy
    std::chrono::duration<double> duration = end - start;
    std::cout << "Thời gian chạy: " << duration.count() << "s" << std::endl;
}