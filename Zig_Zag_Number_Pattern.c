#include <stdio.h>

int main() {
    int n = 5, num = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= n; j++) {
                printf("%d ", num++);
            }
        } else {
            for (int j = n; j >= 1; j--) {
                printf("%d ", num++);
            }
        }
        printf("\n");
    }
    return 0;
}
