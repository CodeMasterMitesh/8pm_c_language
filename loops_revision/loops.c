#include <stdio.h>
// for loop
int main() {

    int n = 5;
    int i;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        // printf("%d\n",i);
        printf("\n");
    }

    // i = 1 -> outer loop
    //j = 1 -> inner loop

    // *****
    // *****
    // *****
    // *****
    // *****
        
    return 0;
}