#include <stdio.h>

int main() {
    int n = 5;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}
