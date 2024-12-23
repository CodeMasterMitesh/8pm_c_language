#include <stdio.h>
// inverted right angel pattern

// *****  
// ****
// ***
// **
// *
// outer loop 5  inner loop                 
// outer loop -> 1   inner loop -> 5 time      j = 5 ; 5 >= 1; j--  *****
// outer loop -> 2   inner loop -> 4 time      j = 5 ; 5 >= 2; j--  ****
// outer loop -> 3   inner loop -> 3 time      j = 5 ; 5 >= 3; j--  ***
// outer loop -> 4   inner loop -> 2 time      j = 5 ; 5 >=4 ; j--  **
// outer loop -> 5   inner loop -> 1 time      j = 5 ; 5 >=5 ; j--  *
int main() {

    int n = 5;
    int i;
    for (i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
        
    return 0;
}