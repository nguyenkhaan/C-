#include <stdio.h> 
#include <iostream> 
#include <chrono>
using namespace std; 
void sang(int &n) 
{
    int prime[n+1]; 
    for (int i=2; i<=n; i++) prime[i] = 1; 
    for (int i=2; i*i<=n; i++) 
    {
        if (prime[i] == 1) 
        {
            for (int j = i*i; j<=n; j+=i) prime[j] = 0;
        }
    }
}
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