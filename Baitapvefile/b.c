#include <stdio.h>
#include <stdlib.h>

#define INPUT "C:\\Users\\DELL\\Desktop\\Luyen Lap Trinh\\Baitapvefile\\o5.txt"
#define MAX 100

int main() {
    FILE *f;
    f = fopen(INPUT, "r");
    if (f == NULL) {
        printf("Cannot open file %s\n", INPUT);
        return 1;
    }

    int m, n;
    fscanf(f, "%d %d", &m, &n); // m dòng, n cột
    int l[MAX][MAX];

    int i = 0, j = 0;
    while (fscanf(f, "%d", &l[i][j]) == 1) {
        j++;
        if (j == n) { // Sửa lỗi so sánh giá trị của j với n
            i++;
            j = 0;
        }
    }

    // Hiển thị ma trận đã đọc
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", l[i][j]);
        }
        printf("\n");
    }

    fclose(f);
    return 0;
}
