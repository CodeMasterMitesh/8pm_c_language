#include <stdio.h>

int main() {
    int i, j, num = 5;
    for (i = 1; i <= num; i++) { // 5 time 
        for (j = 1; j <= num; j++) {
            if (i == 1 || i == num || j == 1 || j == num) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// *****
// *   *
// *   *
// *   *
// *****

// 1 outer loop 
// i = 1
// j = 1
// *****
// *   *
// *   *
// *   *
// *****



