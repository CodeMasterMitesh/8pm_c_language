#include <stdio.h>
// pyramid pattern
//     *
//    ***
//   *****
//  *******
// *********
int main() {
    int i,j,k, num = 5;
    // outer loop for new line
    for (i = 1; i <= num; i++) // this is outer loop
    {
        // inner loop for space before star print
        for (j = i; j < num; j++)
        {
            printf(" ");
        }
        // inner loop for star print
        for (k = 1; k <= (2 * i -1) ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}