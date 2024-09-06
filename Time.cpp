#include <iostream>
#include <chrono>
using namespace std; 
int main() {
    // Bắt đầu đếm thời gian
    auto start = std::chrono::high_resolution_clock::now();

    // Vòng lặp cần đo thời gian chạy
    cout<<"Hello World"<<endl;

    // Kết thúc đếm thời gian
    auto end = std::chrono::high_resolution_clock::now();

    // Tính toán thời gian chạy
    std::chrono::duration<double> duration = end - start;
    std::cout << "Thoi gian la: " << duration.count() << "s" << std::endl;

    return 0;
}