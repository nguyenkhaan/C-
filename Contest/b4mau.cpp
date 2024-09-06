#include <iostream>
using namespace std;

#define MOD 1000000000000000003LL

// Hàm tính tổng từ 1 đến x
long long sum(long long x) {
    return (x * (x + 1) / 2) % MOD;
}

// Hàm tính tổng bình phương từ 1 đến x
long long sum_of_squares(long long x) {
    return (x * (x + 1) % MOD * (2 * x + 1) % MOD * 166666668LL) % MOD; // (1/6 mod MOD)
}

// Hàm tính tổng lập phương từ 1 đến x
long long sum_of_cubes(long long x) {
    long long s = sum(x);
    return (s * s) % MOD;
}

void solve() {
    long long N;
    cin >> N;

    long long total_sum = sum(N);
    long long total_squares = sum_of_squares(N);
    long long total_cubes = sum_of_cubes(N);

    long long result = (total_sum * total_sum % MOD - total_cubes + MOD) % MOD;
    result = (result + total_squares) % MOD;

    cout << result << endl;
}

int main() {
    long T;
    cin >> T;
    while (T--) solve();
    return 0;
}
