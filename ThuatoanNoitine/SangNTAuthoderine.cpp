#include <stdio.h> 
#include <iostream> 
#include <chrono>
using namespace std; 
int main() 
{
    auto start = std::chrono::high_resolution_clock::now();
    int n = 1000000; 
    sang(n);
    auto end = std::chrono::high_resolution_clock::now();
    // Tính toán thời gian chạy
    std::chrono::duration<double> duration = end - start;
    std::cout << "Thời gian chạy: " << duration.count() << "s" << std::endl;
}