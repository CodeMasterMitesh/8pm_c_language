#include <stdio.h>

int main() {
    int i, j, k, num = 5;
    for (i = 1; i <= num; i++) {
        for (j = i; j < num; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}