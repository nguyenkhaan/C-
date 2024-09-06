#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    
    for (int i = 0; i < 1000000; i++) {
        // Vòng lặp trống
    }
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("Thời gian chạy: %f giây\n", cpu_time_used);
    
    return 0;
}
