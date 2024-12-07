#include <iostream>
#include <chrono>
using namespace std; 
int main() {
    // Bắt đầu đếm thời gian
    auto start = std::chrono::high_resolution_clock::now();

    // Vòng lặp cần đo thời gian chạy
    //1tr lan lap -> thoi gian -> thoi gian / 1tr -> thoi gian 1 vong lap chay 
    for (int i = 1; i <= 100000000; ++i) continue; 
    
    // Kết thúc đếm thời gian
    auto end = std::chrono::high_resolution_clock::now();

    // Tính toán thời gian chạy
    std::chrono::duration<double> duration = end - start;
    std::cout << "Thoi gian la: " << duration.count() << "s" << std::endl;

    return 0;
}