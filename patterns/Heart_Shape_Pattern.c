#include <stdio.h>

int main() {
    int num = 6, i, j;
    for (i = num / 2; i <= num; i += 2) {
        for (j = 1; j < num - i; j += 2) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (j = 1; j <= num - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = num; i >= 1; i--) {
        for (j = i; j < num; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}