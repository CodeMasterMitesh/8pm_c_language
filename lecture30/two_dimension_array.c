#include <stdio.h>

int main() {
    // initilzation
    // two dimention array 
    int b[2][3] = {
        // for ex.
        //     0 1 2
        //  0 {1,2,3},
        //     0 1 2
        //  1 {4,5,6},
            {1,2,3},
            {4,5,6},
    };
        // b[1][2] = 7;
        // b[0][0] = 10;
        // printf("%d\n",b[1][2]);
        // printf("%d\n",b[0][0]);

    // print two dimenstion data 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",b[i][j]);
        }
        
        printf("\n");
    }
    // b[0][0] = 10  
    // b[0][1] = 2
    // b[0][2] = 3

    // b[1][0] = 4
    // b[1][1] = 5
    // b[1][2] = 7


    // 1 2 3
    // 4 5 6
    return 0;
}