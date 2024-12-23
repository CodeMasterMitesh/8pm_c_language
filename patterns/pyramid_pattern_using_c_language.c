// how can we create this type of pyramid  pattern uisng c language
//     *
//    ***
//   *****
//  *******
// ********* 

#include<stdio.h>

int main()
{
    // step 1 create 4 variable 
    int i,j,k,num = 5;

    // step 2 
    // outer loop for new line 

    for (i = 1; i <= num; i++)
    {
        // step 3
        // inner loop for space
        for (j = i; j < num; j++)
        {
            printf(" ");
        }

        // step 4
        // second inner loop for print * incrementaly

        for (k = 1; k <= (2 * i -1); k++)
        {
            printf("*");
        }
        // run program and check everything is working perfect or not
        // run again
        // thanks for watching by
        printf("\n");
    }
    
    return 0;
}