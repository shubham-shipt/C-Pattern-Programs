#include <stdio.h>

int main() {
    int n = 5;
    char ch = A;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}
