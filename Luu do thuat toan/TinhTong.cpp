#include <iostream>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long N = 1000000000000; // Giá trị N có thể thay đổi tùy ý
    long long firstMultiple = 17;
    long long lastMultiple = (N - 1) / 17 * 17; // Số lớn nhất chia hết cho 17 và nhỏ hơn N

    // Số lượng các số trong dãy
    long long count = (lastMultiple - firstMultiple) / 17 + 1;

    // Tổng các chữ số của một chu kỳ (17 đến 85)
    long long cycleSum = 0;
    for (long long i = firstMultiple; i <= firstMultiple + 4 * 17; i += 17) {
        cycleSum += sumOfDigits(i);
    }

    // Số lượng chu kỳ đầy đủ
    int fullCycles = count / 5;

    // Tổng của tất cả các số trong các chu kỳ đầy đủ
    int totalSum = fullCycles * cycleSum;

    // Xử lý phần dư (các số không đầy đủ chu kỳ)
    int remainder = count % 5;
    for (int i = 0; i < remainder; ++i) {
        totalSum += sumOfDigits(firstMultiple + fullCycles * 5 * 17 + i * 17);
    }

    std::cout << "Tong cac chu so cua cac so chia het cho 17 va nho hon " << N << " la: " << totalSum << std::endl;

    return 0;
}
