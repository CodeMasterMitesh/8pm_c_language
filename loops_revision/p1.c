#include <stdio.h>
// right angel pattern

// *  
// **
// ***
// ****
// *****
// outer loop 5  inner loop
// i = 1             j = 1; j <= 1 ; j++;  *
// i = 2             j = 1; j <= 2 ; j++;  **
// i = 3             j = 1; j <= 3 ; j++;  ***
// i = 4             j = 1; j <= 4 ; j++;  ****
// i = 5             j = 1; j <= 5 ; j++;  *****
int main() {

    int n = 5;
    int i;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
        
    return 0;
}