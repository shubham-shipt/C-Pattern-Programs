#include <stdio.h>

int main() {
    int n = 5;
    char ch = A;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == n - i + 1)
                printf("%c", ch);
            else
                printf(" ");
        }
        ch++;
        printf("\n");
    }
    return 0;
}
